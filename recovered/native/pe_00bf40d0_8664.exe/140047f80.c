/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047f80 */

undefined8 FUN_140047f80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1[1] + 0x300);
  if (lVar1 != 0) {
    plVar2 = FUN_14001d3fa(*param_1,"pshinter");
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(lVar1 + 8))(plVar2);
      *(undefined8 *)(param_1[0x1e] + 0x28) = uVar3;
    }
  }
  return 0;
}

