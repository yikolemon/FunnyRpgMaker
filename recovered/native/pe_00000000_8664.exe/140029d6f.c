/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140029d6f */

longlong * FUN_140029d6f(longlong *param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [46];
  char local_3a [2];
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  FUN_140029bce(param_2,0x5c);
  FUN_140029bce(param_2,param_3);
  local_3a[0] = '0';
  local_3a[1] = '0';
  pcVar6 = local_3a + 1;
  do {
    *pcVar6 = "0123456789abcdef"[param_4 & 0xf];
    pcVar6 = pcVar6 + -1;
    uVar3 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVar3 != 0);
  plVar2 = (longlong *)*param_2;
  lVar8 = param_2[1];
  bVar9 = false;
  pcVar6 = local_3a;
  do {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      cVar1 = *pcVar6;
      lVar5 = plVar2[1];
      uVar7 = lVar5 + 1;
      if ((ulonglong)plVar2[2] < uVar7) {
        (*(code *)plVar2[3])(plVar2);
        lVar5 = plVar2[1];
        uVar7 = lVar5 + 1;
      }
      plVar2[1] = uVar7;
      *(char *)(*plVar2 + lVar5) = cVar1;
      lVar8 = lVar8 + -1;
    }
    bVar4 = !bVar9;
    bVar9 = true;
    pcVar6 = local_3a + 1;
  } while (bVar4);
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar8;
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

