/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001ef57 */

undefined8 *
FUN_14001ef57(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             char param_5,undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined8 ***local_78;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  lVar4 = *param_2;
  lVar6 = param_2[1];
  bVar7 = 0x20 < (ulonglong)(lVar6 - lVar4);
  bVar8 = (char)param_4 != '\0';
  local_58 = param_2;
  local_50 = param_1;
  if (bVar8 && bVar7) {
    FUN_14000cf50(param_1,param_4);
    lVar4 = *local_58;
    lVar6 = local_58[1];
  }
  lVar5 = 0;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x20) {
    if (lVar5 != 0) {
      FUN_14000cf50(local_50,param_3);
      local_70 = (longlong *)FUN_1400d4020(1);
      cVar1 = FUN_140020392(param_3,&local_78);
      if (local_70 != (longlong *)0x0) {
        puVar2 = (undefined8 *)(**(code **)(*local_70 + 0x10))();
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      if (cVar1 == '\0') {
        FUN_14000cf50(local_50,0x20);
      }
    }
    FUN_14001f304(&local_78,lVar4,param_6,param_7,bVar8 && bVar7);
    ppppuVar3 = &local_78;
    if (0xf < local_60) {
      ppppuVar3 = (undefined8 ****)local_78;
    }
    FUN_14000b1f8(local_50,ppppuVar3,local_68);
    lVar5 = lVar5 + 1;
    FUN_1400017de(&local_78);
  }
  if ((param_5 != '\0') && (0x20 < (ulonglong)(local_58[1] - *local_58))) {
    FUN_14000cf50(local_50,param_5);
  }
  return local_50;
}

