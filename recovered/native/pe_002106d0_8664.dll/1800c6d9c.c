/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c6d9c */

void FUN_1800c6d9c(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_160 [136];
  longlong local_d8;
  longlong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_1 + 0xb8;
  FUN_180044980();
  FUN_18007f878(local_160,param_2,0x20,0x40,1);
  if (local_d8 != 0) {
    plVar4 = (longlong *)FUN_1800b8fe8(param_1,1);
    local_4c = 1;
    FUN_18007f454(local_160,&local_4c,4);
    local_4c = (undefined4)((ulonglong)(plVar4[1] - *plVar4) >> 6);
    FUN_18007f454(local_160,&local_4c,4);
    puVar1 = (undefined8 *)plVar4[1];
    for (puVar7 = (undefined8 *)*plVar4; puVar7 != puVar1; puVar7 = puVar7 + 8) {
      uVar2 = puVar7[3];
      puVar6 = (undefined8 *)*puVar7;
      uVar3 = puVar7[2];
      local_4c = (undefined4)uVar3;
      FUN_18007f454(local_160,&local_4c,4);
      if (uVar2 < 0x10) {
        puVar6 = puVar7;
      }
      FUN_18007f454(local_160,puVar6,uVar3);
      uVar2 = puVar7[7];
      puVar6 = (undefined8 *)puVar7[4];
      uVar3 = puVar7[6];
      local_4c = (undefined4)uVar3;
      FUN_18007f454(local_160,&local_4c,4);
      puVar5 = puVar7 + 4;
      if (0xf < uVar2) {
        puVar5 = puVar6;
      }
      FUN_18007f454(local_160,puVar5,uVar3);
    }
  }
  FUN_18007f8d0(local_160);
  FUN_18023d6e0(local_58);
  return;
}

