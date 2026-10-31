/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dfdc4 */

longlong * FUN_1800dfdc4(float *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [8];
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar10 = FUN_1800dbb7b(param_3);
  FUN_1800db986(param_1,&local_68,param_3,uVar10);
  lVar12 = CONCAT44(uStack_5c,uStack_60);
  if (lVar12 == 0) {
    if (*(longlong *)(param_1 + 4) == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
      FUN_180239790("unordered_map/set too long");
    }
    FUN_1800dffcc(local_50,param_1 + 2,param_3,param_4);
    fVar13 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar13 && fVar13 != *param_1) {
      FUN_1800dba62(param_1);
      FUN_1800db986(param_1,&local_78,local_48 + 0x10,uVar10);
      local_68 = local_78;
      uStack_64 = uStack_74;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
    }
    lVar12 = local_48;
    local_48 = 0;
    lVar12 = FUN_180034bf8(param_1,uVar10,CONCAT44(uStack_64,local_68),lVar12);
    *param_2 = lVar12;
    *(undefined1 *)(param_2 + 1) = 1;
    FUN_1800dbafc(local_50);
  }
  else {
    *(undefined8 *)(lVar12 + 0x18) = *param_4;
    lVar11 = lVar12;
    if ((undefined8 *)(lVar12 + 0x18) != param_4) {
      FUN_180004c8c(lVar12 + 0x20);
      uVar1 = *(undefined4 *)(param_4 + 1);
      uVar2 = *(undefined4 *)((longlong)param_4 + 0xc);
      uVar3 = *(undefined4 *)(param_4 + 2);
      uVar4 = *(undefined4 *)((longlong)param_4 + 0x14);
      uVar5 = *(undefined4 *)((longlong)param_4 + 0x1c);
      uVar6 = *(undefined4 *)(param_4 + 4);
      uVar7 = *(undefined4 *)((longlong)param_4 + 0x24);
      *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)(param_4 + 3);
      *(undefined4 *)(lVar12 + 0x34) = uVar5;
      *(undefined4 *)(lVar12 + 0x38) = uVar6;
      *(undefined4 *)(lVar12 + 0x3c) = uVar7;
      *(undefined4 *)(lVar12 + 0x20) = uVar1;
      *(undefined4 *)(lVar12 + 0x24) = uVar2;
      *(undefined4 *)(lVar12 + 0x28) = uVar3;
      *(undefined4 *)(lVar12 + 0x2c) = uVar4;
      param_4[3] = 0;
      param_4[4] = 0xf;
      *(undefined1 *)(param_4 + 1) = 0;
      FUN_180004c8c(lVar12 + 0x40);
      uVar10 = param_4[5];
      uVar8 = param_4[6];
      uVar9 = param_4[8];
      *(undefined8 *)(lVar12 + 0x50) = param_4[7];
      *(undefined8 *)(lVar12 + 0x58) = uVar9;
      *(undefined8 *)(lVar12 + 0x40) = uVar10;
      *(undefined8 *)(lVar12 + 0x48) = uVar8;
      param_4[7] = 0;
      param_4[8] = 0xf;
      *(undefined1 *)(param_4 + 5) = 0;
      lVar11 = CONCAT44(uStack_5c,uStack_60);
    }
    *(undefined8 *)(lVar12 + 0x60) = param_4[9];
    *param_2 = lVar11;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

