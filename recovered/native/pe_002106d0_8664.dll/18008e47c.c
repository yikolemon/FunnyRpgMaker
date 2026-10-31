/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008e47c */

undefined8 FUN_18008e47c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined1 local_110 [56];
  undefined1 local_d8 [56];
  char *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  char *local_70;
  uint local_68 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x10;
  cVar3 = FUN_180078732(lVar1);
  *(char *)(param_1 + 0x78) = cVar3;
  if ((cVar3 == -0x34) || (cVar3 == -0x6d)) {
    DAT_180417ca0 = 1;
    *(undefined1 *)(param_1 + 0x7a) = 1;
    local_ef8 = CONCAT71(local_ef8._1_7_,1);
    FUN_180077bb2(param_2);
  }
  uVar5 = FUN_180078646(lVar1);
  local_ef8 = 0;
  uStack_ef0 = 0;
  local_ee8 = 0;
  FUN_180098550(&local_ef8,uVar5);
  plVar2 = (longlong *)(param_1 + 0x60);
  if (plVar2 != &local_ef8) {
    FUN_18008e9c4(plVar2);
    *(longlong *)(param_1 + 0x60) = local_ef8;
    *(undefined8 *)(param_1 + 0x68) = uStack_ef0;
    *(undefined8 *)(param_1 + 0x70) = local_ee8;
    local_ef8 = 0;
    uStack_ef0 = 0;
    local_ee8 = 0;
  }
  FUN_18008e9c4(&local_ef8);
  local_68[0] = 0;
  if (uVar5 != 0) {
    do {
      FUN_180097dda(&local_ef8,param_2,local_68);
      FUN_180098258((ulonglong)local_68[0] * 0xde0 + *plVar2,&local_ef8);
      FUN_18008ea3e(&local_ef8);
      local_68[0] = local_68[0] + 1;
    } while (local_68[0] < uVar5);
  }
  bVar4 = FUN_180078732(lVar1);
  *(byte *)(param_1 + 0x79) = bVar4;
  if (0x88 < bVar4) {
    if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x3c) <= *(uint *)(param_2 + 0x38))) {
      return CONCAT71((uint7)(uint3)(*(uint *)(param_2 + 0x3c) >> 8),1);
    }
    local_80 = 0x5400000197;
    local_78 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_70 = "virtual bool __cdecl CommonEvents::load(FileCoder &)";
    FUN_180072a20(local_68);
    local_90 = "{}CommonEvent has more data than expected";
    local_88 = 0x29;
    FUN_1800729a4(&local_ef8,&local_90,local_68);
    FUN_18006f972(local_d8,&local_ef8);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_d8,&DAT_1803a63b0);
  }
  local_80 = 0x6800000194;
  local_78 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
  ;
  local_70 = "virtual bool __cdecl CommonEvents::load(FileCoder &)";
  FUN_180072a20(local_68);
  local_a0 = "{}CommonEvent data terminator smaller than 0x89 (got {:#02x})";
  local_98 = 0x3d;
  FUN_1800984d1(&local_ef8,&local_a0,local_68,param_1 + 0x79);
  FUN_18006f972(local_110,&local_ef8);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_110,&DAT_1803a63b0);
}

