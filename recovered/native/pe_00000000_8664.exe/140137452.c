/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140137452 */

int FUN_140137452(int param_1,ulonglong param_2,undefined4 param_3,longlong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar7 = param_2 & 0xffff;
  uVar6 = *(uint *)(param_4 + 8);
  iVar2 = FUN_1401292b7(uVar7,param_3,param_4,param_6);
  if ((iVar2 == 0) &&
     ((((*(uint *)(param_4 + 8) <= uVar6 ||
        (puVar4 = (undefined8 *)FUN_1401292ee(uVar7,param_5), puVar4 == (undefined8 *)0x0)) ||
       (iVar2 = FUN_140137452(uVar7,*puVar4,param_3,param_4,param_5,param_6), iVar2 == 0)) &&
      ((iVar2 = 0, (short)(param_2 >> 0x10) != 0 && (uVar6 = (uint)(param_2 >> 0x10), uVar6 != 0))))
     )) {
    uVar8 = 1;
    do {
      param_1 = param_1 + 0x10000;
      puVar5 = (undefined4 *)FUN_1401292ee(param_1,param_5);
      uVar1 = *(uint *)(param_4 + 8);
      iVar3 = FUN_1401292b7(*puVar5,param_3,param_4,param_6);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (((uVar1 < *(uint *)(param_4 + 8)) &&
          (puVar4 = (undefined8 *)FUN_1401292ee(*puVar5,param_5), puVar4 != (undefined8 *)0x0)) &&
         (iVar3 = FUN_140137452(*puVar5,*puVar4,param_3,param_4,param_5,param_6), iVar3 != 0)) {
        return iVar3;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 <= uVar6);
  }
  return iVar2;
}

