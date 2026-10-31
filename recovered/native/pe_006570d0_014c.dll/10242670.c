/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10242670 */

void __thiscall
FUN_10242670(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  undefined1 local_50 [64];
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  byte abStack_c [4];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar1 = *(uint *)(param_5 + 0x14);
  local_10 = 0x25;
  puVar2 = (undefined2 *)&local_f;
  if ((uVar1 & 0x20) != 0) {
    local_f = 0x2b;
    puVar2 = &local_e;
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  *puVar2 = 0x3649;
  *(undefined1 *)(puVar2 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar4 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar4 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar4 = 100;
  }
  *(byte *)((int)puVar2 + 3) = bVar4;
  *(undefined1 *)(puVar2 + 2) = 0;
  iVar3 = FUN_1007c87c(local_50,0x40,&local_10,param_7,param_8);
  if (iVar3 < 0) {
    *param_2 = param_3;
    param_2[1] = param_4;
  }
  else {
    FUN_10242e60(param_1,param_2,param_3,param_4,param_5,param_6,local_50,iVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

