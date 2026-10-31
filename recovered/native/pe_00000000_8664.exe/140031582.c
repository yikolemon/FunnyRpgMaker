/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140031582 */

void FUN_140031582(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_68 [24];
  longlong local_50;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140030a1c(local_48,4,param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x14);
  iVar1 = iVar2 + 0x76c;
  iVar4 = -iVar1;
  if (iVar4 < 0) {
    iVar4 = iVar1;
  }
  lVar3 = FUN_14001a250(local_68,iVar4,0x15);
  local_50 = lVar3;
  if (iVar2 < -0x76c) {
    local_50 = lVar3 + -1;
    *(undefined1 *)(lVar3 + -1) = 0x2d;
  }
  FUN_140019fc2(param_4,local_50);
  FUN_140030a90(local_48);
  return;
}

