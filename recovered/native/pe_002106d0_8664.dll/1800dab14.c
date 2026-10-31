/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dab14 */

void FUN_1800dab14(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 **local_70 [3];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_88 = param_3;
  local_50 = param_4;
  FUN_18013309a(param_3,0);
  FUN_180159bbb(DAT_1802dbb70,DAT_1802ac570);
  FUN_1800ffdb5();
  local_70[0] = (undefined8 ***)0x0;
  local_48 = FUN_1800dcbd6(*(undefined8 *)*param_1,&local_50);
  local_98 = &DAT_18035f7f6;
  local_90 = 4;
  FUN_1800dcd1b(local_70,&local_98,&local_88);
  pppuVar4 = local_70;
  if (0xf < local_58) {
    pppuVar4 = (undefined8 ***)local_70[0];
  }
  cVar1 = FUN_18013c8ae(pppuVar4,6,&local_48,param_2,0,0,0,0);
  FUN_180001ef2(local_70);
  if (cVar1 != '\0') {
    FUN_180054d80(local_80,&local_48);
    uVar2 = FUN_1800136a6(*(undefined8 *)*param_1,local_50);
    FUN_1800500c4(uVar2,local_80);
    uVar2 = local_48;
    local_70[0] = (undefined8 **)0x0;
    uVar3 = FUN_1800da878(*(undefined8 *)*param_1,"actorId");
    FUN_1800dcd97(uVar3,param_5,uVar2);
  }
  return;
}

