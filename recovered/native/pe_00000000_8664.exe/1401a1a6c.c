/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a1a6c */

undefined8 FUN_1401a1a6c(char *param_1,longlong *param_2,char *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = 3;
  while ((cVar2 = *param_1, cVar2 == (&DAT_140eb5c34)[lVar3] || (cVar2 == (&DAT_140eb5c38)[lVar3])))
  {
    lVar3 = lVar3 + 1;
    cVar2 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar2;
    if (lVar3 == 3) {
      lVar3 = *param_2;
      *param_2 = lVar3 + -1;
      if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
        puVar1 = (undefined4 *)FUN_14019e8cc();
        *puVar1 = 0x16;
        FUN_1401ae640();
      }
      param_3 = (char *)*param_2;
      lVar3 = 0;
      cVar2 = *param_3;
      *param_2 = (longlong)(param_3 + 1);
      *param_1 = cVar2;
      while ((cVar2 == "INITY"[lVar3] || (cVar2 == "inity"[lVar3]))) {
        lVar3 = lVar3 + 1;
        cVar2 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *param_1 = cVar2;
        if (lVar3 == 5) {
          lVar3 = *param_2;
          *param_2 = lVar3 + -1;
          if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
            puVar1 = (undefined4 *)FUN_14019e8cc();
            *puVar1 = 0x16;
            FUN_1401ae640();
          }
          return 3;
        }
      }
      *param_2 = *param_2 + -1;
      if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
        puVar1 = (undefined4 *)FUN_14019e8cc();
        *puVar1 = 0x16;
        FUN_1401ae640();
      }
LAB_1401a1ba6:
      *param_1 = '\0';
      *param_2 = (longlong)param_3;
      return uVar4;
    }
  }
  *param_2 = *param_2 + -1;
  if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x16;
    FUN_1401ae640();
  }
  uVar4 = 7;
  goto LAB_1401a1ba6;
}

