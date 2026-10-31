/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107030 */

void FUN_180107030(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x494) = 1;
  fVar1 = DAT_1802de720;
  uVar2 = FUN_1800fed00((int)((float)*(int *)(*(longlong *)(param_1 + 800) + 0x10) * DAT_1802de720),
                        *(undefined4 *)(*(longlong *)(param_1 + 800) + 0x14));
  *(undefined4 *)(param_1 + 0x48c) = uVar2;
  uVar2 = FUN_1800fed00((int)((float)*(int *)(*(longlong *)(param_1 + 800) + 0x20) * fVar1),
                        *(undefined4 *)(*(longlong *)(param_1 + 800) + 0x24));
  *(undefined4 *)(param_1 + 0x490) = uVar2;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  FUN_18018e8b2(*(undefined8 *)(param_1 + 800));
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    *(undefined8 *)(param_1 + 600) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  return;
}

