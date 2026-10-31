/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aabd8 */

void FUN_1400aabd8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  FUN_1400a0a20(param_2,param_1);
  local_4c = (uint)((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40)) >> 7)
  ;
  lVar1 = param_2 + 0x58;
  FUN_14009e652(lVar1);
  lVar7 = *(longlong *)(param_1 + 0x48);
  for (lVar6 = *(longlong *)(param_1 + 0x40); lVar6 != lVar7; lVar6 = lVar6 + 0x80) {
    FUN_1400a0a20(param_2,lVar6);
  }
  local_4c = (int)((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60)) >> 3)
             * -0x45d1745d;
  FUN_14009e652(lVar1);
  lVar7 = *(longlong *)(param_1 + 0x68);
  for (lVar6 = *(longlong *)(param_1 + 0x60); lVar6 != lVar7; lVar6 = lVar6 + 0x58) {
    FUN_1400a0a20(param_2,lVar6);
  }
  FUN_1400a0a20(param_2,param_1 + 0x20);
  puVar2 = (uint *)(param_1 + 0x7c);
  FUN_14009e652(lVar1,puVar2);
  lVar7 = *(longlong *)(param_1 + 0x40);
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar8 = lVar7;
  if (lVar7 != lVar6) {
    do {
      FUN_14008cb80(lVar1,lVar7 + 0x20);
      lVar7 = lVar7 + 0x80;
    } while (lVar7 != lVar6);
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar8 = *(longlong *)(param_1 + 0x40);
  }
  uVar5 = (ulonglong)(lVar7 - lVar8) >> 7;
  uVar4 = (uint)uVar5;
  if (uVar4 < *puVar2) {
    do {
      local_4c = local_4c & 0xffffff00;
      FUN_14008cb80(lVar1,&local_4c);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *puVar2);
    uVar4 = (uint)((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40)) >> 7);
  }
  local_4c = uVar4;
  FUN_14009e652(lVar1);
  lVar7 = *(longlong *)(param_1 + 0x40);
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar8 = lVar7;
  if (lVar7 != lVar6) {
    do {
      FUN_1400a0a20(param_2,lVar7 + 0x28);
      lVar7 = lVar7 + 0x80;
    } while (lVar7 != lVar6);
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar8 = *(longlong *)(param_1 + 0x40);
  }
  local_4c = (uint)((ulonglong)(lVar7 - lVar8) >> 7);
  FUN_14009e652(lVar1);
  lVar7 = *(longlong *)(param_1 + 0x40);
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar8 = lVar7;
  if (lVar7 != lVar6) {
    do {
      local_4c = (uint)((ulonglong)(*(longlong *)(lVar7 + 0x50) - *(longlong *)(lVar7 + 0x48)) >> 5)
      ;
      FUN_14009e652(lVar1,&local_4c);
      lVar3 = *(longlong *)(lVar7 + 0x50);
      for (lVar8 = *(longlong *)(lVar7 + 0x48); lVar8 != lVar3; lVar8 = lVar8 + 0x20) {
        FUN_1400a0a20(param_2,lVar8);
      }
      lVar7 = lVar7 + 0x80;
    } while (lVar7 != lVar6);
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar8 = *(longlong *)(param_1 + 0x40);
  }
  local_4c = (uint)((ulonglong)(lVar7 - lVar8) >> 7);
  FUN_14009e652(lVar1);
  lVar7 = *(longlong *)(param_1 + 0x40);
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar8 = lVar7;
  if (lVar7 != lVar6) {
    do {
      local_4c = (uint)((ulonglong)(*(longlong *)(lVar7 + 0x68) - *(longlong *)(lVar7 + 0x60)) >> 2)
      ;
      FUN_14009e652(lVar1,&local_4c);
      lVar3 = *(longlong *)(lVar7 + 0x68);
      for (lVar8 = *(longlong *)(lVar7 + 0x60); lVar8 != lVar3; lVar8 = lVar8 + 4) {
        FUN_14009e652(lVar1,lVar8);
      }
      lVar7 = lVar7 + 0x80;
    } while (lVar7 != lVar6);
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar8 = *(longlong *)(param_1 + 0x40);
  }
  local_4c = (uint)((ulonglong)(lVar7 - lVar8) >> 7);
  FUN_14009e652(lVar1);
  lVar7 = *(longlong *)(param_1 + 0x48);
  for (lVar6 = *(longlong *)(param_1 + 0x40); lVar6 != lVar7; lVar6 = lVar6 + 0x80) {
    FUN_14009e652(lVar1,lVar6 + 0x78);
  }
  if (DAT_1401c9640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_48 ^ (ulonglong)auStack_78);
  }
  return;
}

