/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c9fcd */

undefined4
FUN_1400c9fcd(undefined8 param_1,undefined4 *param_2,uint param_3,float param_4,uint param_5)

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
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14008ac08();
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_140088c06();
  }
  if ((lVar3 == 0) || (*(short *)(lVar3 + 0x118) == 0)) {
    puVar4 = param_2 + 0x56;
    fVar9 = (float)*(undefined8 *)(param_2 + 0x56) + (float)*(undefined8 *)(param_2 + 2);
    fVar10 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x56) >> 0x20) +
             (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
    FUN_1400a4e7a(param_2,&local_78,puVar4,param_2 + 0x58);
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
    FUN_14008fda3(&local_78,0);
    FUN_140085d59(&local_80,0);
    if (((param_3 & 0xfffffffd) == 0) || (puVar4 = param_2 + 0x58, (param_3 | 2) == 3)) {
      puVar4[uVar5] = param_4 + (float)puVar4[uVar5];
    }
  }
  FUN_14008fe7f(*param_2);
  FUN_14007ab2c(3,0);
  local_78 = 0;
  FUN_14007ae77(5);
  uVar2 = FUN_140085d7e(param_1,0,param_5 | 0x80007);
  FUN_14007af87(2);
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_a8)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_a8);
}

