/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10094582 */

void FUN_10094582(int param_1,int param_2,uint *param_3)

{
  uint **ppuVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c3a20;
  local_1c = ExceptionList;
  uVar5 = param_2 - param_1 >> 1;
  puVar3 = (uint *)*param_3;
  puVar4 = (uint *)0x0;
  ExceptionList = &local_1c;
  if (puVar3 != (uint *)0x0) {
    uVar2 = *puVar3;
    if (uVar5 < uVar2) {
      do {
        param_3 = puVar3;
        puVar3 = (uint *)param_3[4];
        if (puVar3 == (uint *)0x0) {
          param_3 = param_3 + 4;
          goto code_r0x100945f6;
        }
        uVar2 = *puVar3;
      } while (uVar5 < uVar2);
      param_3 = param_3 + 4;
    }
    puVar4 = puVar3;
    ppuVar1 = &local_24;
    if (uVar5 == uVar2) goto LAB_10094629;
  }
code_r0x100945f6:
  local_14 = 0xffffffff;
  local_24 = (uint *)FUN_10228350(0x14);
  *local_24 = uVar5;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  *param_3 = (uint)local_24;
  local_24[4] = (uint)puVar4;
  ppuVar1 = (uint **)local_20;
LAB_10094629:
  local_20 = (undefined1 *)ppuVar1;
  local_14 = 0xffffffff;
  FUN_10094664(param_1,param_2);
  ExceptionList = local_1c;
  return;
}

