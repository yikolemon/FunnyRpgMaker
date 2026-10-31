/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c04d0 */

undefined8 FUN_1400c04d0(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_368 [256];
  undefined1 local_268 [256];
  undefined1 local_168 [256];
  undefined8 *local_68;
  longlong local_60;
  byte *local_58;
  byte *pbStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_68 = *(undefined8 **)(param_2 + 8);
  plVar5 = local_68 + 2;
  if (0xf < (ulonglong)local_68[3]) {
    local_68 = (undefined8 *)*local_68;
  }
  local_58 = (byte *)0x0;
  pbStack_50 = (byte *)0x0;
  local_48 = 0;
  local_60 = (longlong)local_68 + *plVar5;
  FUN_14005872a();
  uVar7 = 0x811c9dc5;
  for (pbVar3 = local_58; pbStack_50 != pbVar3; pbVar3 = pbVar3 + 1) {
    uVar7 = (*pbVar3 ^ uVar7) * 0x1000193;
  }
  FUN_140016e5c(&local_58);
  uVar2 = 0;
  lVar6 = -3;
  do {
    uVar2 = (uint)*(byte *)(*param_4 + 0xf + lVar6) | uVar2 << 8;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0);
  uVar2 = uVar7 & 0xffff ^ uVar7 >> 8 & 0xffff00 ^ uVar2;
  *(uint *)(param_2 + 0x1c) = uVar2;
  if ((char)param_4[0xe] == '\x01') {
    *(int *)(param_2 + 0x20) = (int)param_4[0x13];
    FUN_140135ff0(local_368,param_1,0x100);
    uVar4 = FUN_1400c07ac(local_368,param_2,param_4);
  }
  else {
    if (uVar2 < 1000000) {
      lVar6 = FUN_1400c0716(param_3 + 0x28,param_2 + 0x1c);
      if (lVar6 != 0) {
        plVar5 = (longlong *)FUN_1400c0758(param_3 + 0x28,param_2 + 0x1c);
        pbVar3 = (byte *)*plVar5;
        local_58 = *(byte **)pbVar3;
        if (local_58 != pbVar3) {
          do {
            *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(local_58 + 0x1c);
            FUN_140135ff0(local_268,param_1,0x100);
            cVar1 = FUN_1400c07ac(local_268,param_2,param_4);
            if (cVar1 != '\0') {
              *(undefined4 *)(param_4 + 0x13) = *(undefined4 *)(param_2 + 0x20);
              *(undefined1 *)(param_4 + 0xe) = 1;
              return 1;
            }
            FUN_14001010a(&local_58);
          } while (local_58 != pbVar3);
        }
        return 0;
      }
    }
    else {
      FUN_140135ff0(local_168,param_1,0x100);
      cVar1 = FUN_1400c07ac(local_168,param_2,param_4);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_4 + 0xe) = 1;
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

