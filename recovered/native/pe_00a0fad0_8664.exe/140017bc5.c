/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140017bc5 */

undefined8 *
FUN_140017bc5(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 != param_3) {
    puVar3 = param_4;
    do {
      local_50 = (longlong *)FUN_1400d4020(1);
      uVar1 = FUN_140017cb5(*param_2,local_58);
      if (local_50 != (longlong *)0x0) {
        puVar2 = (undefined8 *)(**(code **)(*local_50 + 0x10))();
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      *puVar3 = uVar1;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  *param_1 = param_4;
  return param_1;
}

