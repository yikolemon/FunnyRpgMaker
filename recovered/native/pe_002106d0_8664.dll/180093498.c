/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093498 */

undefined8 FUN_180093498(longlong *param_1,undefined8 param_2)

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
    local_38 = (undefined8 *)FUN_180239630(0x20);
    local_2a = 1;
    FUN_18001c362(param_2,local_58);
    pppuVar2 = local_58;
    if (0xf < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    local_29 = 1;
    FUN_18000cdea(local_c0,pppuVar2);
    puVar1 = local_38;
    local_2b = 1;
    *(undefined4 *)(local_38 + 1) = 0;
    *local_38 = std::collate<wchar_t>::vftable;
    _Getcoll((_Collvec *)(local_38 + 2));
    *param_1 = (longlong)puVar1;
    local_2b = 0;
    FUN_18000d016(local_c0);
    local_29 = 0;
    FUN_180001ef2(local_58);
  }
  return 1;
}

