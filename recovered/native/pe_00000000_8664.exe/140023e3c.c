/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140023e3c */

undefined8 *** FUN_140023e3c(undefined8 ***param_1,undefined8 param_2,char param_3)

{
  undefined8 ***pppuVar1;
  undefined1 local_78 [32];
  char local_58;
  undefined8 **local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  char local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = (undefined8 **)0x0;
  param_1[1] = (undefined8 **)0x0;
  param_1[2] = (undefined8 **)0x0;
  param_1[3] = (undefined8 **)0xf;
  local_28 = param_1 + 4;
  param_1[4] = (undefined8 **)0x0;
  param_1[5] = (undefined8 **)0x0;
  param_1[6] = (undefined8 **)0x0;
  param_1[7] = (undefined8 **)0xf;
  local_20 = param_1;
  if (param_3 != '\0') {
    FUN_1400240af(local_78);
    FUN_14000372c(local_50,local_78);
    local_30 = local_58;
    FUN_14000109c(local_78);
    if ((undefined8 ***)local_20 != local_50) {
      pppuVar1 = local_50;
      if (0xf < local_38) {
        pppuVar1 = (undefined8 ***)local_50[0];
      }
      FUN_14001617e(local_20,pppuVar1,local_40);
    }
    if (local_30 != '\0') {
      FUN_140024012(local_28,1);
    }
    FUN_14000109c(local_50);
  }
  return (undefined8 ***)local_20;
}

