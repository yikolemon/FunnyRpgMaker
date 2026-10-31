/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101745cb */

undefined4 __fastcall FUN_101745cb(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10174620();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0xac);
  iVar1 = 0x54;
  do {
    if (uVar2 < *(uint *)(param_1 + 0xb0)) {
LAB_10174603:
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0xac) = uVar2;
    }
    else if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      uVar2 = *(uint *)(param_1 + 0xac);
      goto LAB_10174603;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      uVar3 = FUN_10174620();
      return uVar3;
    }
  } while( true );
}

