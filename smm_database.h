//
//  smm_database.h
//  infection Path
//
//  Created by Juyeop Kim on 2023/11/05.
//

#ifndef smm_database_h
#define smm_database_h

//���� �ٸ� ������ �����͸� ��� ����� �ĺ��ϴ� �� ���
#define LISTNO_NODE             0
#define LISTNO_FOODCARD         1
#define LISTNO_FESTCARD         2
#define LISTNO_OFFSET_GRADE     3

//�־��� ��Ͽ� �����͸� �߰�
int smmdb_addTail(int list_nr, void* obj);          //add data to tail
//�־��� ��Ͽ��� Ư�� �ε����� �����͸� ����
int smmdb_deleteData(int list_nr, int index);       //delete data
//�־��� ����� ���̸� ��ȯ
int smmdb_len(int list_nr);                   //get database length
//�־��� ��Ͽ��� Ư�� �ε����� �����͸� ��ȯ
void* smmdb_getData(int list_nr, int index);        //get index'th data

#endif /* smm_database_h */
