/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14034590d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14034590d(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  byte local_8a;
  char local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  lVar2 = DAT_14062a630;
  local_70 = ram0x000140613b10 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  local_78 = param_3;
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar4 = FUN_14031821e(lVar1,param_1,0);
    local_88 = *(undefined8 *)(lVar1 + 0x158);
    local_80 = CONCAT44((float)((ulonglong)local_88 >> 0x20) + (float)((ulonglong)param_3 >> 0x20),
                        (float)local_88 + (float)param_3);
    FUN_14032b926();
    FUN_1403229e4(&local_78);
    uVar5 = 0;
    cVar3 = FUN_140322b86(&local_88,uVar4,0,0);
    if (cVar3 != '\0') {
      local_98 = param_4;
      uVar5 = FUN_140344d3b(&local_88,uVar4,&local_89,&local_8a);
      iVar8 = 0x16;
      if (local_89 != '\0') {
        iVar8 = local_8a + 0x17;
      }
      uVar6 = FUN_14031276b(iVar8);
      uVar7 = FUN_14031276b(0);
      FUN_140313fde(&local_88,uVar4,0);
      local_98 = *(undefined4 *)(lVar2 + 0xdfc);
      FUN_140313ca9(local_88,local_80,uVar6,1);
      fVar9 = (float)FUN_140313933();
      fVar10 = (float)FUN_140313933();
      local_98 = 0x3f800000;
      FUN_1403accda(*(undefined8 *)(lVar1 + 800),
                    CONCAT44(fVar9 + local_88._4_4_,fVar10 + (float)local_88),uVar7,param_2);
    }
  }
  else {
    uVar5 = 0;
  }
  if (ram0x000140613b10 == (local_70 ^ (ulonglong)auStack_b8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_70 ^ (ulonglong)auStack_b8);
}

