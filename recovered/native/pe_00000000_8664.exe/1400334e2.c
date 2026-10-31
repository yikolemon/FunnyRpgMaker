/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400334e2 */

void FUN_1400334e2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_68 [24];
  longlong local_50;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar1 = *(uint *)(param_2 + 0x40);
  if ((longlong)(int)uVar1 < 1) {
    FUN_140030a1c(local_48,0,param_1 + 8,param_4);
    FUN_140030a90(local_48);
  }
  else {
    uVar3 = 0x1f;
    if ((uVar1 | 1) != 0) {
      for (; (uVar1 | 1) >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    FUN_140030a1c(local_48,(ulonglong)
                           ((longlong)(int)uVar1 +
                           *(longlong *)(&DAT_1401c9bf0 + (ulonglong)uVar3 * 8)) >> 0x20,param_1 + 8
                  ,param_4);
    iVar2 = *(int *)(param_2 + 0x40);
    iVar4 = -iVar2;
    if (-iVar2 < 0) {
      iVar4 = iVar2;
    }
    lVar5 = FUN_14001a250(local_68,iVar4,0x15);
    local_50 = lVar5;
    if (iVar2 < 0) {
      local_50 = lVar5 + -1;
      *(undefined1 *)(lVar5 + -1) = 0x2d;
    }
    FUN_140019fc2(param_4,local_50);
    FUN_140030a90(local_48);
  }
  return;
}

