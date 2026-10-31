/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140285f2a */

void FUN_140285f2a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &DAT_1404c9d18;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_1404a2310(lVar1,0x10);
    return;
  }
  return;
}

