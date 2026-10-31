/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015109d */

undefined4
FUN_18015109d(undefined8 param_1,undefined4 *param_2,uint param_3,float param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_1801118f0();
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_18010f8ee();
  }
  if ((lVar3 == 0) || (*(short *)(lVar3 + 0x118) == 0)) {
    puVar4 = param_2 + 0x56;
    fVar9 = (float)*(undefined8 *)(param_2 + 0x56) + (float)*(undefined8 *)(param_2 + 2);
    fVar10 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x56) >> 0x20) +
             (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
    FUN_18012bf4a(param_2,&local_78,puVar4,param_2 + 0x58);
    fVar6 = (float)local_78 + fVar9;
    fVar7 = (float)((ulonglong)local_78 >> 0x20) + fVar10;
    uVar1 = param_3 & 0xfffffffe;
    local_78 = CONCAT44(fVar10,fVar9);
    if ((param_3 | 2) == 3) {
      fVar8 = fVar6;
      if (uVar1 == 2) {
        fVar8 = fVar7;
      }
      *(float *)((longlong)&local_78 + (ulonglong)(uVar1 == 2) * 4) = fVar8 - param_4;
    }
    uVar5 = (ulonglong)(uVar1 == 2);
    local_80 = CONCAT44(fVar7 - fVar10,fVar6 - fVar9);
    *(float *)((longlong)&local_80 + uVar5 * 4) = param_4;
    local_88 = 0;
    FUN_180116a8b(&local_78,0);
    FUN_18010ca41(&local_80,0);
    if (((param_3 & 0xfffffffd) == 0) || (puVar4 = param_2 + 0x58, (param_3 | 2) == 3)) {
      puVar4[uVar5] = param_4 + (float)puVar4[uVar5];
    }
  }
  FUN_180116b67(*param_2);
  FUN_180101870(3,0);
  local_78 = 0;
  FUN_180101bbb(5);
  uVar2 = FUN_18010ca66(param_1,0,param_5 | 0x80007);
  FUN_180101ccb(2);
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_a8)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_a8);
}

