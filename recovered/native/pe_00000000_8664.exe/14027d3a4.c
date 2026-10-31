/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027d3a4 */

uint FUN_14027d3a4(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  char *local_90;
  undefined8 local_88;
  undefined8 ***local_70 [3];
  ulonglong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  lVar2 = FUN_14049df00(puVar3);
  uVar1 = 2;
  if ((lVar2 != 0) && (lVar2 == param_1[2])) {
    FUN_1402141fc(local_70,param_1);
    local_90 = "nnection already in progress";
    local_88 = 1;
    FUN_14027d554(param_1);
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    uVar1 = FUN_14044b670(param_1,param_3,param_4);
    if (uVar1 == 5) {
      uVar1 = 0x12;
      if ((param_2 & 2) == 0) {
        uVar1 = 5;
      }
    }
    else if (uVar1 == 2) {
      FUN_1402136e8();
      local_50 = 0xffff00000000;
      ppppuVar5 = local_70;
      if (7 < local_58) {
        ppppuVar5 = (undefined8 ****)local_70[0];
      }
      local_48 = FUN_14044b720(ppppuVar5,&local_90,3,0xffffffff);
      FUN_1402139b2(&local_50,local_48,&local_90);
      FUN_1402136e8();
      iVar4 = (int)local_50;
      if (iVar4 == 0) {
        uVar1 = 2;
      }
      else {
        FUN_1402136e8();
        uVar1 = (uint)(iVar4 != 1) << 4 | 2;
      }
    }
    else if (uVar1 == 0) {
      uVar1 = FUN_14027d5ba(*param_3,param_4);
    }
    FUN_14021331c(local_70);
  }
  return uVar1;
}

