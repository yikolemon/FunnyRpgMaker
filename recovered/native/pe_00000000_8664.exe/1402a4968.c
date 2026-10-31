/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402a4968 */

undefined8 FUN_1402a4968(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined1 local_c0 [104];
  undefined8 **local_58 [3];
  ulonglong local_40;
  undefined8 *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_38 = (undefined8 *)FUN_14044ab00(0x20);
    local_2a = 1;
    FUN_14022d832(param_2,local_58);
    pppuVar2 = local_58;
    if (0xf < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    local_29 = 1;
    FUN_14021e2ba(local_c0,pppuVar2);
    puVar1 = local_38;
    local_2b = 1;
    *(undefined4 *)(local_38 + 1) = 0;
    *local_38 = &DAT_1404caad8;
    _Getcoll((_Collvec *)(local_38 + 2));
    *param_1 = (longlong)puVar1;
    local_2b = 0;
    FUN_14021e4e6(local_c0);
    local_29 = 0;
    FUN_1402133c2(local_58);
  }
  return 1;
}

