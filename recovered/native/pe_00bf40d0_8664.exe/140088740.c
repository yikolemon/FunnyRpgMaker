/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088740 */

ulonglong FUN_140088740(uint param_1,UINT *param_2)

{
  UINT UVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  LPCWSTR pWVar7;
  char local_res10;
  char local_res11;
  undefined1 local_res12;
  byte local_res18;
  undefined1 local_res19;
  
  uVar6 = (ulonglong)(int)param_1;
  if (param_2 == (UINT *)0x0) {
    lVar4 = FUN_14008e7f8();
    pWVar7 = *(LPCWSTR *)(lVar4 + 0x10);
    UVar1 = FUN_14008e82c();
  }
  else {
    pWVar7 = *(LPCWSTR *)(param_2 + 6);
    UVar1 = *param_2;
  }
  if (pWVar7 == (LPCWSTR)0x0) {
    if (0x40 < (int)param_1) {
      uVar2 = param_1 + 0x20;
      if (0x5a < (int)param_1) {
        uVar2 = param_1;
      }
      uVar6 = (ulonglong)uVar2;
    }
    goto LAB_140088784;
  }
  if (param_1 < 0x100) {
    if (param_2 != (UINT *)0x0) {
      if ((*(byte *)(*(longlong *)(param_2 + 2) + uVar6 * 2) & 1) == 0) goto LAB_140088784;
      goto LAB_1400887ba;
    }
    iVar3 = isupper(param_1);
    if (iVar3 == 0) goto LAB_140088784;
LAB_1400887f3:
    lVar4 = FUN_14008ec04();
    uVar5 = *(ushort *)(lVar4 + (ulonglong)((int)param_1 >> 8 & 0xff) * 2) & 0x8000;
  }
  else {
    if (param_2 == (UINT *)0x0) goto LAB_1400887f3;
LAB_1400887ba:
    uVar5 = *(ushort *)(*(longlong *)(param_2 + 2) + ((longlong)uVar6 >> 8 & 0xffU) * 2) >> 0xf;
  }
  if (uVar5 == 0) {
    iVar3 = 1;
    local_res11 = '\0';
    local_res10 = (char)param_1;
  }
  else {
    iVar3 = 2;
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  iVar3 = FUN_14008bc70(pWVar7,0x100,&local_res10,iVar3,&local_res18,3,UVar1,1);
  if (iVar3 != 0) {
    uVar6 = (ulonglong)local_res18;
    if (iVar3 != 1) {
      uVar6 = (ulonglong)CONCAT11(local_res18,local_res19);
    }
    return uVar6;
  }
LAB_140088784:
  return uVar6 & 0xffffffff;
}

