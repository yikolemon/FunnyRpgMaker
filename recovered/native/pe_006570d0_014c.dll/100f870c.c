/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f870c */

bool FUN_100f870c(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) &&
        (*(short *)((int)param_1 + 6) == *(short *)((int)param_2 + 6))) &&
       (((char)param_1[2] == (char)param_2[2] &&
        (*(char *)((int)param_1 + 9) == *(char *)((int)param_2 + 9))))) &&
      ((*(char *)((int)param_1 + 10) == *(char *)((int)param_2 + 10) &&
       ((*(char *)((int)param_1 + 0xb) == *(char *)((int)param_2 + 0xb) &&
        ((char)param_1[3] == (char)param_2[3])))))) &&
     ((*(char *)((int)param_1 + 0xd) == *(char *)((int)param_2 + 0xd) &&
      (*(char *)((int)param_1 + 0xe) == *(char *)((int)param_2 + 0xe))))) {
    bVar1 = *(char *)((int)param_1 + 0xf) == *(char *)((int)param_2 + 0xf);
  }
  return bVar1;
}

