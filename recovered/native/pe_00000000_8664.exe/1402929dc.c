/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402929dc */

undefined8 * FUN_1402929dc(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong unaff_GS_OFFSET;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &DAT_1404bd618;
  puVar2 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &DAT_1404ca918;
  puVar3 = param_1;
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)DAT_140629530 * 8) +
              0x2c) < DAT_140629210) {
    FUN_14044e9d0(&DAT_140629210);
    if (DAT_140629210 == -1) {
      FUN_14028792e(&DAT_140629198);
      FUN_14044ebe0(&DAT_140292fe9);
      param_1 = puVar3;
      _Init_thread_footer(&DAT_140629210);
      puVar3 = param_1;
    }
  }
  plVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1402885a6(&DAT_140629198,param_1 + 3,param_2,(longlong)param_2 + *plVar1 * 2,puVar2,
                param_1 + 3,puVar3,uVar4);
  return puVar3;
}

