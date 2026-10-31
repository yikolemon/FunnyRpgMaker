/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027c3fd */

void FUN_14027c3fd(longlong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined1 local_b8 [32];
  undefined8 **local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1402da550(local_98);
  local_48 = local_98;
  if (0xf < local_80) {
    local_48 = local_98[0];
  }
  uStack_40 = local_88;
  FUN_1402bebd9(&local_78);
  if (local_70 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    FUN_1402138f8(&local_48,local_78);
    pppuVar1 = (undefined8 ***)FUN_1402becea(param_1 + 0x20,&local_48);
    if (pppuVar1[2] == (undefined8 **)0x0) {
      if (pppuVar1 != &local_48) {
        pppuVar2 = &local_48;
        if (0xf < uStack_30) {
          pppuVar2 = (undefined8 ***)local_48;
        }
        FUN_140229170(pppuVar1,pppuVar2,local_38);
      }
      FUN_1402146e6(local_b8,&local_48);
      FUN_1402beda4(&local_68,local_b8);
      if (pppuVar1 + 4 != (undefined8 ***)&local_68) {
        FUN_140271a08();
        pppuVar1[4] = (undefined8 **)local_68;
        pppuVar1[5] = (undefined8 **)puStack_60;
        pppuVar1[6] = (undefined8 **)local_58;
        local_68 = (undefined8 **)0x0;
        puStack_60 = (undefined8 **)0x0;
        local_58 = (undefined8 **)0x0;
      }
      FUN_140271a08(&local_68);
      FUN_1402c0dac(pppuVar1 + 7,pppuVar1[4],(longlong)pppuVar1[5] - (longlong)pppuVar1[4] >> 5);
    }
    FUN_1402133c2(&local_48);
  }
  FUN_1402133c2(local_98);
  return;
}

