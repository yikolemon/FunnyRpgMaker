/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047cd8 */

void FUN_140047cd8(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2f8) != 0) {
      FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x2f8));
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
    FUN_1400498ef(param_1);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x248));
    *(undefined8 *)(param_1 + 0x248) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x230));
    *(undefined8 *)(param_1 + 0x230) = 0;
    FUN_14001cb65(*(longlong *)(param_1 + 0x238),lVar1);
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x238));
    *(undefined8 *)(param_1 + 0x238) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x208));
    *(undefined8 *)(param_1 + 0x208) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x1d8));
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      FUN_140049cef(lVar1,*(longlong *)(param_1 + 0x2a8));
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

