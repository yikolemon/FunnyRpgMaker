/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180254fb0 */

void FUN_180254fb0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  undefined2 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined2 local_76;
  byte abStack_74 [12];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_4 + 0x18);
  local_78 = 0x25;
  puVar7 = (undefined2 *)&local_77;
  if ((uVar1 & 0x20) != 0) {
    local_77 = 0x2b;
    puVar7 = &local_76;
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar7 = 0x23;
    puVar7 = (undefined2 *)((longlong)puVar7 + 1);
  }
  *puVar7 = 0x3649;
  *(undefined1 *)(puVar7 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar5 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar5 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar5 = 0x75;
  }
  *(byte *)((longlong)puVar7 + 3) = bVar5;
  *(undefined1 *)(puVar7 + 2) = 0;
  iVar6 = FUN_18007d317(local_68,0x40,&local_78,param_6);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  if (iVar6 < 0) {
    *param_2 = *param_3;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
  }
  else {
    local_98 = (longlong)iVar6;
    local_a0 = local_68;
    local_a8 = param_5;
    local_88 = *param_3;
    uStack_84 = uVar2;
    uStack_80 = uVar3;
    uStack_7c = uVar4;
    FUN_180255830(param_1,param_2,&local_88,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_c8);
}

