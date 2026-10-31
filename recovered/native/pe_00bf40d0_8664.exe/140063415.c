/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140063415 */

void FUN_140063415(undefined1 (*param_1) [32],undefined8 *param_2,char param_3)

{
  longlong lVar1;
  
  FUN_1400b3c00(param_1,0,0x3e0);
  if (param_3 == '\0') {
    FUN_140061131((undefined8 *)param_1,param_2,'\0');
    lVar1 = param_2[0x16];
    *(longlong *)param_1[0x19] = lVar1;
    *(longlong *)(param_1[0x19] + 0x10) = lVar1 + 0x1100;
    *(undefined8 *)(param_1[0x19] + 8) = param_2[0x86];
    *(undefined4 *)(param_1[0x1a] + 0xc) = *(undefined4 *)((longlong)param_2 + 0x3fc);
    *(undefined8 *)param_1[0x1b] = param_2[0x82];
    *(undefined4 *)(param_1[0x1a] + 0x14) = *(undefined4 *)((longlong)param_2 + 0x404);
    *(undefined4 *)(param_1[0x1a] + 8) = *(undefined4 *)(param_2 + 0x7f);
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_2[0x81];
    *(undefined4 *)(param_1[0x1a] + 0x10) = *(undefined4 *)(param_2 + 0x80);
    *(undefined8 **)(param_1[0x19] + 0x18) = param_2 + 0x6d;
    param_1[0x1a][0] = *(undefined1 *)((longlong)param_2 + 0x371);
    *(undefined4 *)(param_1[0x1b] + 0x14) = *(undefined4 *)((longlong)param_2 + 0x424);
    *(undefined8 *)param_1[0x1c] = param_2[0x87];
    *(undefined8 *)(param_1[0x1c] + 8) = param_2[0x88];
  }
  else {
    FUN_140061131((undefined8 *)param_1,param_2,param_3);
    *(undefined8 **)(param_1[0x19] + 0x10) = param_2 + 0xe6;
    *(undefined8 *)(param_1[0x1c] + 0x10) = param_2[0xcb];
    *(undefined4 *)(param_1[0x1b] + 0x10) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined8 *)(param_1[0x1b] + 8) = param_2[0xcd];
    *(undefined4 *)(param_1[0x1b] + 0x14) = *(undefined4 *)(param_2 + 0xde);
    *(undefined8 *)(param_1[0x1e] + 8) = param_2[0xdd];
    *(undefined4 *)(param_1[0x1a] + 8) = *(undefined4 *)((longlong)param_2 + 0x674);
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_2[0xcf];
    *(undefined8 *)param_1[0x1d] = param_2[0xd0];
    *(undefined8 *)(param_1[0x1d] + 8) = param_2[0xd1];
    *(undefined8 *)(param_1[0x1e] + 0x10) = param_2[0xe4];
    *(undefined4 *)(param_1[0x1e] + 0x18) = *(undefined4 *)(param_2 + 0xe5);
    *(undefined4 *)(param_1[0x1c] + 0x18) = *(undefined4 *)(param_2 + 0xce);
  }
  return;
}

