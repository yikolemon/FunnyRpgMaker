/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093a3c */

void __thiscall FUN_10093a3c(int param_1,int param_2,short param_3,char param_4)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c39e0;
  local_1c = ExceptionList;
  uVar5 = 0;
  ExceptionList = &local_1c;
  local_28 = param_1;
  do {
    sVar3 = param_3;
    if ((param_3 == -1) && (sVar3 = 0x107, uVar5 == 0x5f)) {
      if (param_4 == '\0') {
code_r0x10093aaf:
        puVar4 = *(undefined4 **)(param_2 + 0x18);
        if (puVar4 == (undefined4 *)0x0) {
          local_14 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_10228350(0x20);
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *(undefined4 **)(param_2 + 0x18) = puVar4;
          local_24 = puVar4;
        }
        pbVar1 = (byte *)((int)puVar4 + (uVar5 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar5 & 7));
      }
    }
    else {
      local_14 = 0xffffffff;
      cVar2 = (**(code **)(**(int **)(*(int *)(local_28 + 0xc) + 4) + 0x10))
                        ((int)sVar3,uVar5 & 0xffff);
      if (param_4 != cVar2) goto code_r0x10093aaf;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x100) {
      ExceptionList = local_1c;
      return;
    }
  } while( true );
}

