/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801869aa */

void FUN_1801869aa(void)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong local_a0 [2];
  undefined1 local_90 [16];
  undefined8 *local_80;
  undefined8 *local_78 [2];
  ulonglong local_68 [4];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_180001e92(local_68,"$gameSelfSwitches._data");
  FUN_180013de7(local_90,local_68);
  FUN_180001ef2(local_68);
  FUN_180044980(&DAT_180403cf8);
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1801623f6(local_78,local_90);
  puVar3 = local_78[0];
  local_80 = (undefined8 *)*local_78[0];
  while (local_80 != puVar3) {
    puVar1 = local_80 + 4;
    cVar2 = *(char *)(local_80 + 8);
    puVar6 = local_80 + 8;
    if (cVar2 == '\x04') {
      local_68[0] = local_68[0] & 0xffffffffffffff00;
      FUN_1800e06ec(&DAT_1802b0ea8,puVar6,local_68);
      uVar4 = (undefined1)local_68[0];
      FUN_180183a42(&DAT_180419590,local_68,puVar1);
      *(undefined1 *)(local_68[0] + 0x30) = uVar4;
    }
    else if ((byte)(cVar2 - 5U) < 2) {
      local_68[0] = 0;
      FUN_1800dcb19(puVar6,local_68);
      uVar5 = local_68[0];
      FUN_180183a42(&DAT_180419590,local_68,puVar1);
      *(bool *)(local_68[0] + 0x30) = uVar5 != 0;
    }
    else if (cVar2 == '\x03') {
      FUN_180017024(puVar6,local_68);
      uVar5 = local_68[2];
      FUN_180183a42(&DAT_180419590,local_a0,puVar1);
      *(bool *)(local_a0[0] + 0x30) = uVar5 != 0;
      FUN_180001ef2(local_68);
    }
    FUN_180016c4c(&local_80);
  }
  FUN_180016c8e(local_78,local_78,local_78[0][1]);
  thunk_FUN_1802464a0(local_78[0],0x50);
  FUN_18023d6e0(&DAT_180403cf8);
  FUN_1800137c6(local_90);
  return;
}

