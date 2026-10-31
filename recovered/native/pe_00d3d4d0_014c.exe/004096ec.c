/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004096ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004096ec(uint *param_1,undefined8 param_2,int param_3,ushort param_4,double param_5)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 ****ppppuVar6;
  undefined1 ******ppppppuVar7;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined1 *****local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  double local_50;
  double local_48;
  undefined8 local_40;
  int local_38 [2];
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_78;
  local_1c = &LAB_00418150;
  local_20 = ExceptionList;
  local_60 = 0;
  local_70 = (undefined1 *****)0x0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_5c = 0xf;
  local_18 = 0;
  local_58 = *(uint *)(param_3 + 0x14) & 0x3000;
  if (local_58 == 0x3000) {
    local_54 = 0xffffffff;
    iVar3 = -1;
  }
  else {
    local_54 = *(uint *)(param_3 + 0x18);
    iVar3 = *(int *)(param_3 + 0x1c);
  }
  ExceptionList = &local_20;
  uVar4 = FUN_0040ab87(local_54,iVar3,local_58);
  local_40 = param_5;
  dVar1 = local_40;
  local_40._4_4_ = (uint)((ulonglong)param_5 >> 0x20);
  uVar2 = local_40._4_4_;
  uVar5 = local_40._4_4_ & 0x7fffffff;
  local_40 = dVar1;
  if (((uVar5 < 0x7ff00000) && (_DAT_004a88d0 < (double)(_DAT_004a88c0 & (ulonglong)param_5))) &&
     (local_58 == 0x2000)) {
    local_38[0] = 0;
    FUN_00491640(SUB84(param_5,0),uVar2,local_38);
    iVar3 = -local_38[0];
    if (-local_38[0] < 0) {
      iVar3 = local_38[0];
    }
    uVar4 = uVar4 + (uint)(iVar3 * 0x7597) / 100000;
  }
  FUN_0040416c(&local_70,uVar4 + 0x32,0);
  local_48 = param_5;
  uVar4 = *(uint *)(param_3 + 0x14) & 0xffffffef;
  if ((uVar2 & 0x7fffffff) < 0x7ff00000) {
    uVar4 = *(uint *)(param_3 + 0x14);
  }
  FUN_0040abc2(local_74,(undefined1 *)local_38,'\0',uVar4);
  ppppppuVar7 = &local_70;
  if (0xf < local_5c) {
    ppppppuVar7 = (undefined1 ******)local_70;
  }
  ppppuVar6 = (undefined4 ****)FUN_00409faa((undefined1 ****)ppppppuVar7,local_60,(int)local_38);
  if ((int)ppppuVar6 < 0) {
    *(undefined8 *)param_1 = param_2;
  }
  else {
    local_50 = param_5;
    ppppppuVar7 = (undefined1 ******)local_70;
    if (local_5c < 0x10) {
      ppppppuVar7 = &local_70;
    }
    local_30 = param_2;
    FUN_0040ac22(param_1,(uint)param_2,(char ***)((ulonglong)param_2 >> 0x20),param_3,param_4,
                 (char *)ppppppuVar7,ppppuVar6,(uVar2 & 0x7fffffff) < 0x7ff00000);
  }
  local_18 = 0xffffffff;
  FUN_0040230a((int *)&local_70);
  ExceptionList = local_20;
  return param_1;
}

