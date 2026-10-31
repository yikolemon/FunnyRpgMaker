/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001ee02 */

void __thiscall FUN_1001ee02(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_64 [24];
  undefined1 local_4c [16];
  int local_3c;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059520;
  local_1c = ExceptionList;
  local_2c = *(int *)(param_1 + 4);
  ExceptionList = &local_1c;
  local_34 = param_1;
  FUN_1001efaa(local_4c,param_2,param_3);
  local_14 = 0;
  if (local_3c != 0) {
    uVar3 = 0;
    while (uVar3 < 0x100) {
      local_21 = (undefined1)uVar3;
      local_14 = 0;
      local_30 = uVar3;
      FUN_1001efaa(local_64,&local_21,&local_20);
      local_14 = 2;
      cVar2 = FUN_1001bb3a(local_4c);
      local_14 = 0xffffffff;
      FUN_10001fee();
      if (cVar2 != '\0') {
        puVar4 = *(undefined4 **)(local_2c + 0x18);
        if (puVar4 == (undefined4 *)0x0) {
          local_14 = 0;
          puVar4 = (undefined4 *)FUN_10228350(0x20);
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *(undefined4 **)(local_2c + 0x18) = puVar4;
          local_28 = puVar4;
        }
        pbVar1 = (byte *)((int)puVar4 + (local_30 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)local_30 & 7));
      }
      uVar3 = local_30 + 1;
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
    ExceptionList = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228760(0);
}

