/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274f6a */

bool FUN_10274f6a(void)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_103a900c == -1) {
    iVar1 = 0;
  }
  else {
    bVar2 = DAT_103a900c == 0;
    if (!bVar2) goto LAB_10274f97;
    iVar1 = FUN_10274ffe(3,"FlsGetValue2",&DAT_103254e8,&DAT_103254f0);
  }
  bVar2 = iVar1 == 0;
LAB_10274f97:
  return !bVar2;
}

