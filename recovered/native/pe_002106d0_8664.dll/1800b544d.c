/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b544d */

undefined8
FUN_1800b544d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 ****param_14)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 ***local_78 [3];
  ulonglong local_60;
  longlong local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1800e2380(local_98);
  pcVar1 = DAT_180417b00;
  local_58 = local_88;
  bVar3 = local_88 != 0;
  if (bVar3) {
    param_14 = local_78;
    FUN_1800c919d(param_14,local_98);
    if (7 < local_60) {
      param_14 = (undefined8 ****)local_78[0];
    }
  }
  local_49 = bVar3;
  uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11,param_12,param_13,param_14);
  local_49 = bVar3;
  if (local_58 != 0) {
    FUN_1800010ec(local_78);
  }
  FUN_180001ef2(local_98);
  return uVar2;
}

