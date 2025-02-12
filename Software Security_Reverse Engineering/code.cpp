int main(void)

{
  int iVar1;
  int *array1;
  int *arrayPos10;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  undefined auVar6 [16];
  undefined8 local_168;
  undefined8 local_160;
  allocator local_d0 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>> local_c8 [32];
  allocator local_a8 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>> local_a0 [32];
  undefined8 local_80;
  undefined8 local_78;
  int *ourNum2;
  int i;
  int arrayOfSize10 [4];
  int *addrOfIntVal5;

  int limit;
  int newMinNum;
  int *uselessInt1;
  int inputNum;
  int *ourNum;
  int *local_20;
  int local_c;
  
  local_c = 0;
  local_20 = 0;
  ourNum = (int *)0x0;
  limit = 10;
  
  
  cout<<"Password: ";
  inputNum = getInputNum();
  
  array1 = findMinimum(&inputNum,&limit);
  newMinNum = *array1;
  
  array1 = 0;
  arrayPos10 = callAddTen((int *)&ourNum); // ourNum = 0; arrayPos10=10

  memset(arrayOfSize10,0,10); //arrayOfSize10 = [0,0,0,0,0,0,0,0,0,0]
  
  for (i = 0; i < newMinNum; i = i + 1) {

    iVar1 = getInputAsInt();

  }
  
  
  array1 = 0
  arrayPos10 = 10;
  piVar3 = 0;
  piVar4 = 10;
  auVar6 = FUN_00402ae0((char *)array1,(char *)arrayPos10,(char *)piVar3,(char *)piVar4);
  local_168 = SUB168(auVar6,0);
  local_80 = local_168;

  ppiVar5 = (int **)FUN_00402b50(&local_80);
  array1 = *ppiVar5; //array1=1
  arrayPos10 = callAddTen(arrayOfSize10); //arrayPos10 = 10
  if (array1 == arrayPos10) {
    ppiVar5 = (int **)FUN_00402b70((long)&local_80);
    array1 = *ppiVar5;
    arrayPos10 = callAddTen((int *)&ourNum);
    if (array1 == arrayPos10) goto SUCCESS;
  }

SUCCESS:
  std::allocator<char>::allocator();

  verifier(local_c8,"Login successful.",local_d0);

  printOutput((basic_string *)local_c8);
  
  return local_c;
}

