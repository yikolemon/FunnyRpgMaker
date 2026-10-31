/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf90e */

/* WARNING: Removing unreachable block (ram,0x0001400bf973) */
/* WARNING: Removing unreachable block (ram,0x0001400bf952) */
/* WARNING: Removing unreachable block (ram,0x0001400bf93f) */

ulonglong FUN_1400bf90e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint in_XCR0;
  undefined1 local_a8 [32];
  ulonglong local_88;
  void *local_80;
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  piVar1 = (int *)cpuid_basic_info(0);
  if ((((0 < *piVar1) &&
       (lVar2 = cpuid_Version_info(1), (~*(uint *)(lVar2 + 0xc) & 0x18000000) == 0)) &&
      (uVar5 = xinuse(0), (~(in_XCR0 & (uint)uVar5) & 6) == 0)) &&
     (piVar1 = (int *)cpuid_basic_info(0), 6 < *piVar1)) {
    xinuse(0);
  }
  DAT_1401d4870 = &LAB_1400c0481;
  FUN_14000550c(&local_68,param_1,0);
  FUN_14007e000(&local_80,&local_68);
  FUN_140005690(&local_68);
  uVar7 = local_78 - (longlong)local_80;
  if ((uVar7 < 0xf) || (iVar4 = memcmp(local_80,&DAT_140165d6c,5), iVar4 != 0)) {
    uVar5 = FUN_1400052b8(&PTR_DAT_1401c9740,"Invalid WOLFX file");
    FUN_1400054d7(uVar5);
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_14008c2ca(&local_68,uVar7);
    if (param_3 != &local_68) {
      FUN_140016e5c(param_3);
      *param_3 = local_68;
      param_3[1] = uStack_60;
      param_3[2] = local_58;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
    }
    FUN_140016e5c(&local_68);
    thunk_FUN_1400498e2(local_80,(longlong)local_80 + 10,*param_3);
    if (*(char *)(param_3 + 0xe) == '\x01') {
      cVar3 = FUN_1400bfddf(&local_80,param_3 + 0xb,param_2,param_3);
      if (cVar3 == '\0') goto LAB_1400bf9fe;
    }
    puVar6 = (undefined8 *)param_2[1];
    for (puVar8 = (undefined8 *)*param_2; puVar8 != puVar6; puVar8 = puVar8 + 0xb) {
      cVar3 = FUN_1400bfddf(&local_80,puVar8 + 8,param_2,param_3);
      if (cVar3 != '\0') {
        if (param_3 + 3 != puVar8) {
          puVar6 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar6 = (undefined8 *)*puVar8;
          }
          FUN_140017200(param_3 + 3,puVar6,puVar8[2]);
          if ((ulonglong)puVar8[7] < 0x10) {
            puVar6 = puVar8 + 4;
          }
          else {
            puVar6 = (undefined8 *)puVar8[4];
          }
          FUN_140017200(param_3 + 7,puVar6,puVar8[6]);
          FUN_1400587f4(param_3 + 0xb,puVar8[8],puVar8[9] - puVar8[8]);
        }
        break;
      }
    }
    if (*(char *)(param_3 + 0xe) == '\x01') {
      uVar5 = FUN_1400c02bc(param_1,0x2e,0xffffffffffffffff);
      FUN_1400c09e0(&local_68,param_1,0,uVar5,local_a8);
      local_88 = (ulonglong)*(uint *)((longlong)param_3 + 0x74);
      FUN_14000550c(local_a8,&local_68,0);
      FUN_1400c0321(local_a8,param_3,&local_88);
      FUN_140005690(local_a8);
      FUN_140005242(&local_68);
      uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      goto LAB_1400bfa00;
    }
  }
LAB_1400bf9fe:
  uVar7 = 0;
LAB_1400bfa00:
  FUN_140016e5c(&local_80);
  return uVar7 & 0xffffffff;
}

