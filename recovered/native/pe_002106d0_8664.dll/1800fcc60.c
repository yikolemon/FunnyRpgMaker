/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fcc60 */

bool FUN_1800fcc60(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = false;
  if ((((((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) &&
        (*(short *)((longlong)param_1 + 6) == *(short *)((longlong)param_2 + 6))) &&
       ((bVar2 = bVar1, (char)param_1[2] == (char)param_2[2] &&
        (*(char *)((longlong)param_1 + 9) == *(char *)((longlong)param_2 + 9))))) &&
      ((*(char *)((longlong)param_1 + 10) == *(char *)((longlong)param_2 + 10) &&
       ((*(char *)((longlong)param_1 + 0xb) == *(char *)((longlong)param_2 + 0xb) &&
        ((char)param_1[3] == (char)param_2[3])))))) &&
     ((*(char *)((longlong)param_1 + 0xd) == *(char *)((longlong)param_2 + 0xd) &&
      (*(char *)((longlong)param_1 + 0xe) == *(char *)((longlong)param_2 + 0xe))))) {
    bVar2 = *(char *)((longlong)param_1 + 0xf) == *(char *)((longlong)param_2 + 0xf);
  }
  return bVar2;
}

