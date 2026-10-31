/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180162253 */

void FUN_180162253(longlong param_1,undefined8 **param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined1 local_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 *local_38;
  undefined8 *puStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uStack_50 = param_2[2];
  if ((undefined8 *)0xf < param_2[3]) {
    param_2 = (undefined8 **)*param_2;
  }
  local_58 = param_2;
  FUN_18016257e(&local_68,&local_58);
  if (local_60 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (undefined8 ***)0x0;
    uStack_50 = (undefined8 *)0x0;
    FUN_180002428(&local_58,local_68);
    pppuVar1 = (undefined8 ***)FUN_1800ad81a(param_1 + 0x20,&local_58);
    if (pppuVar1[2] == (undefined8 **)0x0) {
      if (pppuVar1 != &local_58) {
        pppuVar2 = &local_58;
        if (0xf < uStack_40) {
          pppuVar2 = (undefined8 ***)local_58;
        }
        FUN_180017ca0(pppuVar1,pppuVar2,local_48);
      }
      FUN_180003216(local_88,&local_58);
      FUN_18016263f(&local_38,local_88);
      if (pppuVar1 + 4 != (undefined8 ***)&local_38) {
        FUN_180060538();
        pppuVar1[4] = (undefined8 **)local_38;
        pppuVar1[5] = (undefined8 **)puStack_30;
        pppuVar1[6] = (undefined8 **)local_28;
        local_38 = (undefined8 **)0x0;
        puStack_30 = (undefined8 **)0x0;
        local_28 = (undefined8 **)0x0;
      }
      FUN_180060538(&local_38);
      FUN_1800af8dc(pppuVar1 + 7,pppuVar1[4],(longlong)pppuVar1[5] - (longlong)pppuVar1[4] >> 5);
    }
    FUN_180001ef2(&local_58);
  }
  return;
}

