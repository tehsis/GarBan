#include "Map.h"

Map::Map() {
    tileSet = NULL;
}

bool Map::loadTileSet(char* file) {

    if((tileSet = Surfaces::surfLoad(file)) == NULL) {
    }

    return true;


}

bool Map::load(char* file) {

    tileList.clear();
    FILE *mapFile;

    if((mapFile = fopen(file,"r")) == NULL) {
	system("echo error");
	return false;
    }

    rewind(mapFile);


    for(int i=0;i<(HEIGHT/TILE_SIZE);i++) {
        for(int j=0;j<(WIDTH/TILE_SIZE);j++) {
            Tile temp;

	    fscanf(mapFile,"%d:%d",&temp.id,&temp.type);

	    tileList.push_back(temp);
        }

	fscanf(mapFile,"\n");

    }


    fclose(mapFile);

    return true;
}

//This function must draw the map according the pixels indicated in
//the vector. For now, it just draws random.

bool Map::draw(SDL_Surface* dst) {

   if(dst == NULL) {
	   return false;
   }

   std::vector<Tile>::iterator tile_It;

   int tilesInARow = tileSet->w / TILE_SIZE; //Number of tiles in a row of the tileset
   int tileX,tileY; // Coordinates of the tile in the tileset

   tile_It = tileList.begin();

   for(int i=0; i<TILES_COLUMN;i++) {
       for(int j=0 ; j<TILES_ROW; j++,tile_It++) {
    
	     int tileT = tile_It->id;

	     //Calculates the position of the tile in the tileset
	     tileY = (int)(tileT / (tilesInARow)) * TILE_SIZE ;
	     tileX = (tileT - (((int)(tileT/(tilesInARow))) * (tilesInARow))) * TILE_SIZE;


	     Surfaces::draw(tileSet,tileX,tileY,TILE_SIZE,TILE_SIZE,dst,j*TILE_SIZE,
		     i*TILE_SIZE);
       }
   }

  return true;
}

void Map::free() {
	SDL_FreeSurface(tileSet);
}
