/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fe931 */

undefined4 FUN_100fe931(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100fbf7e();
  uVar2 = FUN_100fa1fa(0x29f0);
  FUN_100fe97a(param_1);
  FUN_100fe927(uVar2);
  FUN_100ffd71();
  if (iVar1 != 0) {
    FUN_100fe927(iVar1);
  }
  return uVar2;
}

