/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b6db */

undefined4 FUN_0041b6db(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 < 1) {
    uVar3 = 0x80070057;
    if (param_2 == 0) {
      return 0x80070057;
    }
  }
  else {
    iVar4 = -0x7ffffffd;
    do {
      cVar2 = *(char *)(param_3 + 0x7ffffffd + iVar4);
      if (cVar2 == '\0') {
        param_1 = param_1 + iVar4 + 0x7ffffffd;
        uVar3 = 0;
        goto LAB_0041b756;
      }
      param_1[iVar4 + 0x7ffffffd] = cVar2;
      iVar1 = iVar4 + 1;
    } while ((iVar4 - param_2 != -0x7ffffffe) && (bVar5 = iVar4 != 0, iVar4 = iVar1, bVar5));
    bVar5 = iVar1 - param_2 == -0x7ffffffd;
    uVar3 = 0x8007007a;
    if (!bVar5) {
      uVar3 = 0;
    }
    param_1 = param_1 + (iVar1 - (uint)bVar5) + 0x7ffffffd;
  }
LAB_0041b756:
  *param_1 = 0;
  return uVar3;
}

