/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027866a */

longlong * FUN_14027866a(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_60;
  uint local_58;
  undefined1 local_50 [8];
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1402787d4(local_50,param_1,*param_1,param_3,param_4);
  lVar2 = local_48;
  lVar3 = *param_1;
  lVar5 = *(longlong *)(lVar3 + 8);
  uVar6 = 0;
  if (*(char *)(lVar5 + 0x19) == '\0') {
    lVar1 = lVar5;
    do {
      lVar5 = lVar1;
      bVar4 = *(ulonglong *)(lVar5 + 0x20) < *(ulonglong *)(local_48 + 0x20);
      if (*(ulonglong *)(lVar5 + 0x20) == *(ulonglong *)(local_48 + 0x20)) {
        bVar4 = *(ulonglong *)(lVar5 + 0x28) < *(ulonglong *)(local_48 + 0x28);
      }
      if (bVar4 == false) {
        lVar3 = lVar5;
      }
      lVar1 = *(longlong *)(lVar5 + (ulonglong)bVar4 * 0x10);
    } while (*(char *)(lVar1 + 0x19) == '\0');
    uVar6 = (uint)(bVar4 ^ 1);
  }
  if (*(char *)(lVar3 + 0x19) == '\0') {
    bVar4 = *(ulonglong *)(lVar3 + 0x20) <= *(ulonglong *)(local_48 + 0x20);
    if (*(ulonglong *)(local_48 + 0x20) == *(ulonglong *)(lVar3 + 0x20)) {
      bVar4 = *(ulonglong *)(lVar3 + 0x28) <= *(ulonglong *)(local_48 + 0x28);
    }
    if (bVar4) {
      *param_2 = lVar3;
      *(undefined1 *)(param_2 + 1) = 0;
      bVar4 = true;
      goto LAB_140278760;
    }
  }
  if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1402653f8();
  }
  local_48 = 0;
  bVar4 = false;
LAB_140278760:
  FUN_14027887a(local_50);
  if (!bVar4) {
    local_60 = lVar5;
    local_58 = uVar6;
    lVar3 = FUN_1402652a8(param_1,&local_60,lVar2);
    *param_2 = lVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}

