/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011a442 */

void FUN_1011a442(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockContextRebuildNodes\n");
  }
  uVar1 = 0;
  FUN_101188bc(0);
  FUN_10119f7c(uVar1,0,0);
  FUN_1011a49b(*(undefined4 *)(param_1 + 0x26b4));
  FUN_1011a60f();
  return;
}

