//
//  smm_database.h
//  infection Path
//
//  Created by Juyeop Kim on 2023/11/05.
//

#ifndef smm_database_h
#define smm_database_h

//각각 다른 종류의 데이터를 담는 목록을 식별하는 데 사용
#define LISTNO_NODE             0
#define LISTNO_FOODCARD         1
#define LISTNO_FESTCARD         2
#define LISTNO_OFFSET_GRADE     3

//주어진 목록에 데이터를 추가
int smmdb_addTail(int list_nr, void* obj);          //add data to tail
//주어진 목록에서 특정 인덱스의 데이터를 삭제
int smmdb_deleteData(int list_nr, int index);       //delete data
//주어진 목록의 길이를 반환
int smmdb_len(int list_nr);                   //get database length
//주어진 목록에서 특정 인덱스의 데이터를 반환
void* smmdb_getData(int list_nr, int index);        //get index'th data

#endif /* smm_database_h */
