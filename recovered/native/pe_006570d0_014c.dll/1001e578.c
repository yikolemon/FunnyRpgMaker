/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e578 */

void __thiscall FUN_1001e578(int param_1,int param_2,ushort param_3,char param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100594f0;
  local_1c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &local_1c;
  do {
    uVar3 = param_3;
    if ((param_3 == 0xffff) && (uVar3 = 0x107, uVar4 == 0x5f)) {
      if (param_4 == '\0') {
code_r0x1001e5dd:
        puVar2 = *(undefined4 **)(param_2 + 0x18);
        if (puVar2 == (undefined4 *)0x0) {
          local_14 = 0xffffffff;
          puVar2 = (undefined4 *)FUN_10228350(0x20);
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *(undefined4 **)(param_2 + 0x18) = puVar2;
          local_24 = puVar2;
        }
        pbVar1 = (byte *)((int)puVar2 + (uVar4 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar4 & 7));
      }
    }
    else if ((bool)param_4 !=
             ((*(ushort *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0xc) + uVar4 * 2) &
              uVar3) != 0)) goto code_r0x1001e5dd;
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x100) {
      ExceptionList = local_1c;
      return;
    }
  } while( true );
}

