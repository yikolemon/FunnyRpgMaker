/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c92a3 */

void FUN_1801c92a3(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_1801c68b0();
  lVar2 = FUN_180107ee8();
  uVar3 = FUN_180107ef9();
  thunk_FUN_18011e650();
  FUN_1801c8e72();
  if ((longlong *)plVar1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[2] + 0x10))();
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
  }
  if ((longlong *)plVar1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
  }
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) & 0xfffffbe7;
  FUN_18011dd30(uVar3);
  FUN_1801c9326(plVar1);
  return;
}

