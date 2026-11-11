
undefined4
FUN_08000010(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_08006e94(param_4,param_2 * 0x100 + param_3 + DAT_08000040,param_5);
  return 0;
}




undefined4
FUN_08000044(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_08006e94(param_2 * 0x100 + param_3 + DAT_08000074,param_4,param_5);
  return 0;
}




undefined4 FUN_08000078(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x100 + DAT_080000a0;
  FUN_08006dfc(iVar1,0xff,0x100,iVar1,param_2,param_1);
  return 0;
}




undefined4 FUN_080000a4(void)

{
  return 0;
}




undefined4 FUN_080000b8(void)

{
  int iVar1;
  
  FUN_080068f8(DAT_0800011c,DAT_08000118);
  FUN_0800692a(DAT_0800011c,DAT_08000118);
  FUN_08006988(DAT_0800011c,DAT_08000124,DAT_08000120,0x102);
  FUN_080069f0(DAT_0800011c,DAT_08000124,DAT_08000128,9);
  FUN_080069be(DAT_0800011c,DAT_08000124);
  iVar1 = FUN_0800695c(DAT_0800011c);
  *DAT_0800012c = (uint)(iVar1 == 0);
  return 0;
}




uint FUN_08000130(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint local_14;
  uint local_c;
  
  local_14 = param_1;
  for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
    uVar1 = *(uint *)(((local_14 ^ *(byte *)(param_2 + local_c)) & 0xf) * 4 + DAT_080001a4) ^
            local_14 >> 4;
    local_14 = *(uint *)(((uVar1 ^ *(byte *)(param_2 + local_c) >> 4) & 0xf) * 4 + DAT_080001a4) ^
               uVar1 >> 4;
  }
  return local_14;
}




uint FUN_080001a8(uint param_1,uint param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}




uint FUN_080001c4(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    param_2 = param_1;
  }
  return param_2;
}




int FUN_080001e0(int param_1,undefined4 param_2)

{
  int extraout_r1;
  
  FUN_08006b98(param_1,param_2);
  return param_1 - extraout_r1;
}




undefined4 FUN_08000204(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080001e0(param_1 + param_2 + -1,param_2);
  return uVar1;
}




int FUN_0800022a(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08006ba4(param_1 + -1);
  return 0x20 - iVar1;
}




undefined4 FUN_0800024c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006be0(param_1);
  return uVar1;
}




undefined4 FUN_08000264(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006c20(param_1);
  return uVar1;
}




int FUN_0800027c(int param_1,int param_2)

{
  return param_1 - param_2;
}




undefined4 FUN_08000294(undefined4 param_1)

{
  return param_1;
}




undefined4 FUN_080002a6(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08000294(param_1);
  return uVar1;
}




uint FUN_080002c0(uint param_1)

{
  return param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}




undefined4 FUN_080002d4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080002c0(param_1);
  return uVar1;
}




undefined4 FUN_080002ee(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08006c54(param_1);
  return uVar1;
}




void FUN_08000308(undefined4 param_1)

{
  FUN_08006c68(param_1);
  return;
}




void FUN_08000320(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0xffffffff;
  return;
}




void FUN_0800033a(int param_1,undefined4 *param_2)

{
  FUN_08006dfc(param_2[3],0xff,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
  *param_2 = 0xffffffff;
  return;
}




int FUN_08000366(int param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,uint param_6,
                int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  uint local_18;
  int local_14;
  
  local_14 = param_7;
  if ((*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < param_6 + param_8) ||
     ((*(int *)(param_1 + 0x6c) != 0 && (*(uint *)(param_1 + 0x6c) <= param_5)))) {
    iVar1 = -0x54;
  }
  else {
LAB_080005c4:
    do {
      if (param_8 == 0) {
        return 0;
      }
      local_18 = param_8;
      if (((param_2 != (uint *)0x0) && (param_5 == *param_2)) && (param_6 < param_2[1] + param_2[2])
         ) {
        if (param_2[1] <= param_6) {
          iVar1 = FUN_080001c4(param_8,param_2[2] + (param_2[1] - param_6));
          FUN_08006e94(local_14,param_2[3] + (param_6 - param_2[1]),iVar1);
          local_14 = local_14 + iVar1;
          param_6 = param_6 + iVar1;
          param_8 = param_8 - iVar1;
          goto LAB_080005c4;
        }
        local_18 = FUN_080001c4(param_8,param_2[1] - param_6);
      }
      if ((param_5 == *param_3) && (param_6 < param_3[1] + param_3[2])) {
        if (param_3[1] <= param_6) {
          iVar1 = FUN_080001c4(local_18,param_3[2] + (param_3[1] - param_6));
          FUN_08006e94(local_14,param_3[3] + (param_6 - param_3[1]),iVar1);
          local_14 = local_14 + iVar1;
          param_6 = param_6 + iVar1;
          param_8 = param_8 - iVar1;
          goto LAB_080005c4;
        }
        local_18 = FUN_080001c4(local_18,param_3[1] - param_6);
      }
      if (((param_4 <= param_8) &&
          (FUN_08006b98(param_6,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x14)), extraout_r1 == 0)
          ) && (*(uint *)(*(int *)(param_1 + 0x68) + 0x14) <= param_8)) {
        iVar1 = FUN_080001e0(local_18,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x14));
        iVar2 = (**(code **)(*(int *)(param_1 + 0x68) + 4))
                          (*(undefined4 *)(param_1 + 0x68),param_5,param_6,local_14,iVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        local_14 = local_14 + iVar1;
        param_6 = param_6 + iVar1;
        param_8 = param_8 - iVar1;
        goto LAB_080005c4;
      }
      *param_3 = param_5;
      uVar3 = FUN_080001e0(param_6,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x14));
      param_3[1] = uVar3;
      uVar4 = FUN_08000204(param_6 + param_4,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x14));
      iVar1 = FUN_080001c4(uVar4,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c));
      uVar3 = FUN_080001c4(iVar1 - param_3[1],*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
      param_3[2] = uVar3;
      iVar1 = (**(code **)(*(int *)(param_1 + 0x68) + 4))
                        (*(undefined4 *)(param_1 + 0x68),*param_3,param_3[1],param_3[3],param_3[2]);
    } while (iVar1 == 0);
  }
  return iVar1;
}




int FUN_080005d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,int param_6,int param_7,uint param_8)

{
  int iVar1;
  undefined1 auStack_2c [8];
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_18 = param_7;
  local_1c = 0;
  local_14 = 0;
  while( true ) {
    if (param_8 <= local_14) {
      return 0;
    }
    local_1c = FUN_080001c4(param_8 - local_14,8);
    local_20 = FUN_08000366(param_1,param_2,param_3,param_4 - local_14,param_5,param_6 + local_14,
                            auStack_2c,local_1c);
    if (local_20 != 0) break;
    iVar1 = FUN_08006de0(auStack_2c,local_18 + local_14,local_1c);
    if (iVar1 != 0) {
      if (iVar1 < 0) {
        return 1;
      }
      return 2;
    }
    local_14 = local_14 + local_1c;
    local_24 = 0;
  }
  return local_20;
}




int FUN_08000680(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,int param_6,uint param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined1 auStack_24 [8];
  int local_1c;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = 0;
  while( true ) {
    if (param_7 <= local_14) {
      return 0;
    }
    local_18 = FUN_080001c4(param_7 - local_14,8);
    local_1c = FUN_08000366(param_1,param_2,param_3,param_4 - local_14,param_5,param_6 + local_14,
                            auStack_24,local_18);
    if (local_1c != 0) break;
    uVar1 = FUN_08000130(*param_8,auStack_24,local_18);
    *param_8 = uVar1;
    local_14 = local_14 + local_18;
  }
  return local_1c;
}




int FUN_08000712(int param_1,int *param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_2 != -1) && (*param_2 != -2)) {
    uVar1 = FUN_08000204(param_2[2],*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
    iVar2 = (**(code **)(*(int *)(param_1 + 0x68) + 8))
                      (*(undefined4 *)(param_1 + 0x68),*param_2,param_2[1],param_2[3],uVar1);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_4 != '\0') {
      FUN_08000320(param_1,param_3);
      iVar2 = FUN_080005d6(param_1,0,param_3,uVar1,*param_2,param_2[1],param_2[3],uVar1);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (iVar2 != 0) {
        return -0x54;
      }
    }
    FUN_0800033a(param_1,param_2);
  }
  return 0;
}




int FUN_080007e2(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  FUN_08000320(param_1,param_3);
  iVar1 = FUN_08000712(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x68) + 0x10))(*(undefined4 *)(param_1 + 0x68));
  }
  return iVar1;
}




int FUN_08000838(int param_1,int *param_2,undefined4 param_3,undefined1 param_4,int param_5,
                uint param_6,int param_7,int param_8)

{
  int iVar1;
  int local_c;
  
  local_c = param_7;
  do {
    while( true ) {
      if (param_8 == 0) {
        return 0;
      }
      if (((param_5 == *param_2) && ((uint)param_2[1] <= param_6)) &&
         (param_6 < (uint)(param_2[1] + *(int *)(*(int *)(param_1 + 0x68) + 0x28)))) break;
      *param_2 = param_5;
      iVar1 = FUN_080001e0(param_6,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
      param_2[1] = iVar1;
      param_2[2] = 0;
    }
    iVar1 = FUN_080001c4(param_8,*(int *)(*(int *)(param_1 + 0x68) + 0x28) + (param_2[1] - param_6))
    ;
    FUN_08006e94(param_2[3] + (param_6 - param_2[1]),local_c,iVar1);
    local_c = local_c + iVar1;
    param_6 = param_6 + iVar1;
    param_8 = param_8 - iVar1;
    iVar1 = FUN_080001a8(param_2[2],param_6 - param_2[1]);
    param_2[2] = iVar1;
  } while ((param_2[2] != *(int *)(*(int *)(param_1 + 0x68) + 0x28)) ||
          (iVar1 = FUN_08000712(param_1,param_2,param_3,param_4), iVar1 == 0));
  return iVar1;
}




undefined4 FUN_08000938(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(undefined4 *)(param_1 + 0x68),param_2);
  return uVar1;
}




void FUN_08000960(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return;
}




undefined1 FUN_08000986(int *param_1)

{
  undefined1 uVar1;
  
  if ((*param_1 == -1) || (param_1[1] == -1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




undefined4 FUN_080009b6(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_1 == *param_2) || (param_1[1] == param_2[1])) || (*param_1 == param_2[1])) ||
     (param_1[1] == *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




undefined1 FUN_08000a06(int *param_1,int *param_2)

{
  undefined1 uVar1;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) ||
     ((*param_1 == param_2[1] && (param_1[1] == *param_2)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_08000a5e(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08000294(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_08000294(param_1[1]);
  param_1[1] = uVar1;
  return;
}




void FUN_08000a92(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080002a6(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_080002a6(param_1[1]);
  param_1[1] = uVar1;
  return;
}




uint FUN_08000ac6(uint param_1)

{
  return ~param_1 >> 0x1f;
}




bool FUN_08000ade(int param_1)

{
  return (param_1 << 0x16) >> 0x16 == -1;
}




uint FUN_08000afc(uint param_1)

{
  return param_1 >> 0x14 & 0x700;
}




uint FUN_08000b1a(uint param_1)

{
  return param_1 >> 0x14 & 0x780;
}




uint FUN_08000b38(uint param_1)

{
  return param_1 >> 0x14 & 0x7ff;
}




uint FUN_08000b54(uint param_1)

{
  return param_1 >> 0x14 & 0xff;
}




int FUN_08000b6a(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_08000b54(param_1);
  return (int)cVar1;
}




uint FUN_08000b86(uint param_1)

{
  return param_1 >> 10 & 0x3ff;
}




uint FUN_08000ba2(uint param_1)

{
  return param_1 & 0x3ff;
}




int FUN_08000bb8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08000ade(param_1);
  iVar1 = FUN_08000ba2(iVar1 + param_1);
  return iVar1 + 4;
}




void FUN_08000be2(int param_1,int param_2)

{
  int local_c;
  
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(uint *)(param_1 + local_c * 4) =
         *(uint *)(param_2 + local_c * 4) ^ *(uint *)(param_1 + local_c * 4);
  }
  return;
}




undefined4 FUN_08000c28(int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (2 < local_c) {
      return 1;
    }
    if (*(int *)(param_1 + local_c * 4) != 0) break;
    local_c = local_c + 1;
  }
  return 0;
}




bool FUN_08000c5e(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_08000ba2(*param_1);
  return iVar1 != 0;
}




undefined1 FUN_08000c80(undefined4 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_08000ba2(*param_1);
  return uVar1;
}




bool FUN_08000c9e(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_08000afc(*param_1);
  return iVar1 != 0;
}




bool FUN_08000cc0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_08000ba2(*param_1);
  return uVar1 >> 9 != 0;
}




undefined1 FUN_08000ce4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_08000afc(*param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_080009b6(param_1 + 1,param_2), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_08000d24(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08000294(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_08000294(param_1[1]);
  param_1[1] = uVar1;
  uVar1 = FUN_08000294(param_1[2]);
  param_1[2] = uVar1;
  return;
}




void FUN_08000d64(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080002a6(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_080002a6(param_1[1]);
  param_1[1] = uVar1;
  uVar1 = FUN_080002a6(param_1[2]);
  param_1[2] = uVar1;
  return;
}




void FUN_08000da4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08000294(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_08000294(param_1[1]);
  param_1[1] = uVar1;
  return;
}




void FUN_08000dd4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080002a6(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_080002a6(param_1[1]);
  param_1[1] = uVar1;
  return;
}




void FUN_08000e04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08000294(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_08000294(param_1[1]);
  param_1[1] = uVar1;
  return;
}




void FUN_08000e34(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080002a6(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_080002a6(param_1[1]);
  param_1[1] = uVar1;
  return;
}




void FUN_08000e64(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08000294(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_08000294(param_1[1]);
  param_1[1] = uVar1;
  uVar1 = FUN_08000294(param_1[2]);
  param_1[2] = uVar1;
  uVar1 = FUN_08000294(param_1[3]);
  param_1[3] = uVar1;
  uVar1 = FUN_08000294(param_1[4]);
  param_1[4] = uVar1;
  uVar1 = FUN_08000294(param_1[5]);
  param_1[5] = uVar1;
  return;
}




void FUN_08000ed4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080002a6(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_080002a6(param_1[1]);
  param_1[1] = uVar1;
  uVar1 = FUN_080002a6(param_1[2]);
  param_1[2] = uVar1;
  uVar1 = FUN_080002a6(param_1[3]);
  param_1[3] = uVar1;
  uVar1 = FUN_080002a6(param_1[4]);
  param_1[4] = uVar1;
  uVar1 = FUN_080002a6(param_1[5]);
  param_1[5] = uVar1;
  return;
}




void FUN_08000f44(int param_1,int param_2)

{
  int *local_c;
  
  local_c = (int *)(param_1 + 0x28);
  while( true ) {
    if (*local_c == 0) {
      return;
    }
    if (param_2 == *local_c) break;
    local_c = (int *)*local_c;
  }
  *local_c = *(int *)*local_c;
  return;
}




void FUN_08000f84(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 **)(param_1 + 0x28) = param_2;
  return;
}




undefined4 FUN_08000fa4(void)

{
  return DAT_08000fb8;
}




uint FUN_08000fbc(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_08000fa4(param_1);
  return uVar1 >> 0x10;
}




undefined2 FUN_08000fda(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_08000fa4(param_1);
  return uVar1;
}




void FUN_08000ff6(int param_1)

{
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
  return;
}




void FUN_0800100e(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_08000ff6(param_1);
  return;
}




undefined4 FUN_08001032(int param_1,int param_2)

{
  uint extraout_r1;
  
  FUN_08006b98((param_2 - *(int *)(param_1 + 0x54)) + *(int *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0x6c));
  if (extraout_r1 < *(uint *)(param_1 + 0x58)) {
    *(byte *)(*(int *)(param_1 + 100) + (extraout_r1 >> 3)) =
         *(byte *)(*(int *)(param_1 + 100) + (extraout_r1 >> 3)) | (byte)(1 << (extraout_r1 & 7));
  }
  return 0;
}




int FUN_0800109c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  
  FUN_08006b98(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x54) = extraout_r1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar1 = FUN_080001c4(*(int *)(*(int *)(param_1 + 0x68) + 0x2c) << 3,
                       *(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_08006dfc(*(undefined4 *)(param_1 + 100),0,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x2c));
  iVar2 = FUN_08005d94(param_1,DAT_08001120,param_1,1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_0800100e(param_1);
  }
  return iVar2;
}




int FUN_08001124(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  
  do {
    while (*(uint *)(param_1 + 0x5c) < *(uint *)(param_1 + 0x58)) {
      if ((*(byte *)(*(int *)(param_1 + 100) + (*(uint *)(param_1 + 0x5c) >> 3)) >>
           (*(uint *)(param_1 + 0x5c) & 7) & 1) == 0) {
        FUN_08006b98(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                     *(undefined4 *)(param_1 + 0x6c));
        *param_2 = extraout_r1;
        do {
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
          if (*(uint *)(param_1 + 0x58) <= *(uint *)(param_1 + 0x5c)) {
            return 0;
          }
        } while ((*(byte *)(*(int *)(param_1 + 100) + (*(uint *)(param_1 + 0x5c) >> 3)) >>
                  (*(uint *)(param_1 + 0x5c) & 7) & 1) != 0);
        return 0;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    }
    if (*(int *)(param_1 + 0x60) == 0) {
      return -0x1c;
    }
    iVar1 = FUN_0800109c(param_1);
  } while (iVar1 == 0);
  return iVar1;
}




int FUN_08001200(int param_1,undefined4 *param_2,uint param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = param_2[3];
  local_28 = param_2[4];
  local_18 = 0;
  iVar1 = FUN_08000ce4(param_1 + 0x3c,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_08000b86(param_3), iVar1 != 0)) {
    iVar1 = FUN_08000b86(*(undefined4 *)(param_1 + 0x3c));
    iVar2 = FUN_08000b86(param_4);
    if (iVar1 == iVar2) {
      return -2;
    }
    uVar3 = FUN_08000b86(*(undefined4 *)(param_1 + 0x3c));
    uVar4 = FUN_08000b86(param_4);
    if (uVar3 < uVar4) {
      local_18 = local_18 + DAT_08001400;
    }
  }
  do {
    iVar1 = FUN_08000bb8(local_28);
    if (local_14 < iVar1 + 4U) {
      return -2;
    }
    iVar1 = FUN_08000bb8(local_28);
    local_14 = local_14 - iVar1;
    local_1c = local_28;
    local_20 = FUN_08000366(param_1,0,param_1,4,*param_2,local_14,&local_28,4);
    if (local_20 != 0) {
      return local_20;
    }
    uVar3 = FUN_080002c0(local_28);
    local_28 = (local_1c ^ uVar3) & 0x7fffffff;
    iVar1 = FUN_08000b86(param_3);
    if ((iVar1 != 0) && (iVar1 = FUN_08000afc(local_1c), iVar1 == 0x400)) {
      uVar3 = FUN_08000b86(local_1c);
      uVar4 = FUN_08000b86(param_4 - local_18);
      if (uVar3 <= uVar4) {
        if (local_1c == (param_4 - local_18 & DAT_08001404 | DAT_08001408)) {
          return -2;
        }
        iVar1 = FUN_08000b6a(local_1c);
        local_18 = iVar1 * 0x400 + local_18;
      }
    }
  } while ((local_1c & param_3) != (param_4 - local_18 & param_3));
  iVar1 = FUN_08000ade(local_1c);
  if (iVar1 == 0) {
    uVar5 = FUN_08000ba2(local_1c);
    local_24 = FUN_080001c4(uVar5,param_7);
    local_20 = FUN_08000366(param_1,0,param_1,local_24,*param_2,local_14 + param_5 + 4,param_6,
                            local_24);
    if (local_20 == 0) {
      FUN_08006dfc(param_6 + local_24,0,param_7 - local_24);
      local_20 = local_18 + local_1c;
    }
  }
  else {
    local_20 = -2;
  }
  return local_20;
}




undefined4
FUN_0800140c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08000ba2(param_4);
  uVar1 = FUN_08001200(param_1,param_2,param_3,param_4,0,param_5,uVar1);
  return uVar1;
}




int FUN_08001446(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
                undefined4 param_6,undefined4 param_7,uint param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  
  local_1c = param_9;
  if (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < param_8 + param_10) {
    iVar1 = -0x54;
  }
  else {
LAB_08001600:
    do {
      if (param_10 == 0) {
        return 0;
      }
      local_20 = param_10;
      if (((param_3 != (int *)0x0) && (*param_3 == -2)) &&
         (param_8 < (uint)(param_3[1] + param_3[2]))) {
        if ((uint)param_3[1] <= param_8) {
          iVar1 = FUN_080001c4(param_10,param_3[2] + (param_3[1] - param_8));
          FUN_08006e94(local_1c,param_3[3] + (param_8 - param_3[1]),iVar1);
          local_1c = local_1c + iVar1;
          param_8 = param_8 + iVar1;
          param_10 = param_10 - iVar1;
          goto LAB_08001600;
        }
        local_20 = FUN_080001c4(param_10,param_3[1] - param_8);
      }
      if ((*param_4 == -2) && (param_8 < (uint)(param_4[1] + param_4[2]))) {
        if ((uint)param_4[1] <= param_8) {
          iVar1 = FUN_080001c4(local_20,param_4[2] + (param_4[1] - param_8));
          FUN_08006e94(local_1c,param_4[3] + (param_8 - param_4[1]),iVar1);
          local_1c = local_1c + iVar1;
          param_8 = param_8 + iVar1;
          param_10 = param_10 - iVar1;
          goto LAB_08001600;
        }
        FUN_080001c4(local_20,param_4[1] - param_8);
      }
      *param_4 = -2;
      iVar1 = FUN_080001e0(param_8,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x14));
      param_4[1] = iVar1;
      uVar2 = FUN_08000204(param_8 + param_5,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x14));
      iVar1 = FUN_080001c4(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
      param_4[2] = iVar1;
      iVar1 = FUN_08001200(param_1,param_2,param_6,param_7,param_4[1],param_4[3],param_4[2]);
    } while (-1 < iVar1);
  }
  return iVar1;
}




undefined4 FUN_08001614(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_14;
  
  if ((param_2 & 0x10000000) == 0) {
    local_14 = DAT_080016c8;
  }
  else {
    local_14 = DAT_080016c4;
  }
  if (((((param_2 ^ *param_1) & local_14) == 0) || (iVar1 = FUN_08000ade(*param_1), iVar1 != 0)) ||
     ((DAT_080016c4 & param_2) == (*param_1 & DAT_080016cc | DAT_080016d0))) {
    *param_1 = 0;
    return 1;
  }
  iVar1 = FUN_08000afc(param_2);
  if (iVar1 == 0x400) {
    uVar2 = FUN_08000b86(param_2);
    uVar3 = FUN_08000b86(*param_1);
    if (uVar2 <= uVar3) {
      iVar1 = FUN_08000b6a(param_2);
      *param_1 = iVar1 * 0x400 + *param_1;
    }
  }
  return 0;
}




int FUN_080016d4(undefined4 param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,
                uint param_6,uint param_7,uint param_8,ushort param_9,ushort param_10,
                ushort param_11,code *param_12,uint *param_13)

{
  int iVar1;
  uint uVar2;
  uint local_108;
  uint local_104;
  uint *local_100;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint auStack_b0 [7];
  ushort auStack_94 [4];
  uint auStack_8c [21];
  short local_38;
  ushort local_36;
  uint *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  FUN_08006dfc(&local_bc,0,8);
  local_108 = param_4;
  local_104 = param_3;
  local_100 = param_2;
LAB_080016fa:
  do {
    while( true ) {
      do {
        iVar1 = FUN_08000bb8(local_108);
        if (iVar1 + local_104 < local_100[3]) {
          iVar1 = FUN_08000bb8(local_108);
          local_104 = local_104 + iVar1;
          local_2c = FUN_08000366(param_1,0,param_1,4,*local_100,local_104,&local_b4,4);
          if (local_2c != 0) {
            FUN_08002018();
          }
          uVar2 = FUN_080002c0(local_b4);
          local_108 = local_108 ^ uVar2 | 0x80000000;
          local_bc = *local_100;
          local_b8 = local_104 + 4;
          local_24 = &local_bc;
          local_b4 = local_108;
        }
        else {
          if ((int)param_6 < 1) {
            local_20 = 0;
            goto LAB_08001e3e;
          }
          local_b4 = *param_5;
          local_24 = (uint *)param_5[1];
          param_5 = param_5 + 2;
          param_6 = param_6 - 1;
        }
        local_30 = DAT_08001a34;
      } while (((param_8 ^ local_b4) & DAT_08001a34 & param_7) != 0);
      iVar1 = FUN_08000b86(param_7);
      if (iVar1 == 0) break;
      auStack_b0[local_1c * 0xf] = (uint)local_100;
      auStack_b0[local_1c * 0xf + 1] = local_104;
      auStack_b0[local_1c * 0xf + 2] = local_108;
      auStack_b0[local_1c * 0xf + 3] = (uint)param_5;
      auStack_b0[local_1c * 0xf + 4] = param_6;
      auStack_b0[local_1c * 0xf + 5] = param_7;
      auStack_b0[local_1c * 0xf + 6] = param_8;
      auStack_94[local_1c * 0x1e] = param_9;
      auStack_94[local_1c * 0x1e + 1] = param_10;
      auStack_94[local_1c * 0x1e + 2] = param_11;
      auStack_8c[local_1c * 0xf] = (uint)param_12;
      auStack_8c[local_1c * 0xf + 1] = (uint)param_13;
      auStack_8c[local_1c * 0xf + 2] = local_b4;
      auStack_8c[local_1c * 0xf + 3] = (uint)local_24;
      iVar1 = local_1c;
      auStack_8c[local_1c * 0xf + 4] = local_bc;
      auStack_8c[iVar1 * 0xf + 5] = local_b8;
      param_7 = 0;
      param_8 = 0;
      param_9 = 0;
      param_10 = 0;
      param_11 = 0;
      param_12 = DAT_08001a38;
      param_13 = auStack_8c + local_1c * 0xf + 2;
      local_1c = local_1c + 1;
    }
    while( true ) {
      iVar1 = FUN_08000b86(param_7);
      if (((iVar1 != 0) &&
          ((uVar2 = FUN_08000b86(local_b4), uVar2 < param_9 ||
           (uVar2 = FUN_08000b86(local_b4), param_10 <= uVar2)))) ||
         (iVar1 = FUN_08000b38(local_b4), iVar1 == 0)) goto LAB_080016fa;
      iVar1 = FUN_08000b38(local_b4);
      if (iVar1 == 0x101) break;
      iVar1 = FUN_08000b38(local_b4);
      if (iVar1 == 0x102) {
        local_28 = 0;
        goto LAB_08001db8;
      }
      local_20 = (*param_12)(param_13,(short)param_11 * 0x400 + local_b4,local_24);
      if (local_20 < 0) {
        iVar1 = FUN_08002018();
        return iVar1;
      }
      if (local_20 == 0) goto LAB_080016fa;
LAB_08001e3e:
      if (local_1c == 0) {
        return local_20;
      }
      local_100 = (uint *)auStack_b0[(local_1c + -1) * 0xf];
      local_104 = auStack_b0[(local_1c + -1) * 0xf + 1];
      local_108 = auStack_b0[(local_1c + -1) * 0xf + 2];
      param_5 = (uint *)auStack_b0[(local_1c + -1) * 0xf + 3];
      param_6 = auStack_b0[(local_1c + -1) * 0xf + 4];
      param_7 = auStack_b0[(local_1c + -1) * 0xf + 5];
      param_8 = auStack_b0[(local_1c + -1) * 0xf + 6];
      param_9 = auStack_94[(local_1c + -1) * 0x1e];
      param_10 = auStack_94[(local_1c + -1) * 0x1e + 1];
      param_11 = auStack_94[(local_1c + -1) * 0x1e + 2];
      param_12 = (code *)auStack_8c[(local_1c + -1) * 0xf];
      param_13 = (uint *)auStack_8c[(local_1c + -1) * 0xf + 1];
      local_b4 = auStack_8c[(local_1c + -1) * 0xf + 2];
      local_24 = (uint *)auStack_8c[(local_1c + -1) * 0xf + 3];
      local_bc = auStack_8c[(local_1c + -1) * 0xf + 4];
      local_b8 = auStack_8c[(local_1c + -1) * 0xf + 5];
      local_1c = local_1c + -1;
    }
    if (param_12 != DAT_08001e34) {
      FUN_08006dfc(auStack_b0 + local_1c * 0xf,0,0x3c);
      auStack_b0[local_1c * 0xf] = (uint)local_100;
      auStack_b0[local_1c * 0xf + 1] = local_104;
      auStack_b0[local_1c * 0xf + 2] = local_108;
      auStack_b0[local_1c * 0xf + 3] = (uint)param_5;
      auStack_b0[local_1c * 0xf + 4] = param_6;
      auStack_b0[local_1c * 0xf + 5] = param_7;
      auStack_b0[local_1c * 0xf + 6] = param_8;
      auStack_94[local_1c * 0x1e] = param_9;
      auStack_94[local_1c * 0x1e + 1] = param_10;
      auStack_94[local_1c * 0x1e + 2] = param_11;
      auStack_8c[local_1c * 0xf] = (uint)param_12;
      auStack_8c[local_1c * 0xf + 1] = (uint)param_13;
      local_1c = local_1c + 1;
      local_36 = FUN_08000ba2(local_b4);
      local_38 = FUN_08000b86(local_b4);
      local_100 = local_24;
      local_104 = 0;
      local_108 = 0xffffffff;
      param_5 = (uint *)0x0;
      param_6 = 0;
      param_7 = DAT_08001e38;
      param_8 = 0x20000000;
      param_9 = local_36;
      param_10 = local_36 + 1;
      param_11 = (local_38 - local_36) + param_11;
    }
  } while( true );
LAB_08001db8:
  uVar2 = FUN_08000ba2(local_b4);
  if (uVar2 <= local_28) goto LAB_080016fa;
  local_34 = local_24;
  uVar2 = local_24[local_28 * 3];
  iVar1 = FUN_08000b86(local_b4);
  local_20 = (*param_12)(param_13,((byte)uVar2 + 0x300) * 0x100000 |
                                  (iVar1 + (short)param_11) * 0x400 | local_34[local_28 * 3 + 2],
                         local_34[local_28 * 3 + 1]);
  if (local_20 < 0) {
    iVar1 = FUN_08002018();
    return iVar1;
  }
  if (local_20 != 0) goto LAB_080016fa;
  local_28 = local_28 + 1;
  goto LAB_08001db8;
}




undefined4 FUN_08002018(void)

{
  undefined4 in_r3;
  
  return in_r3;
}




undefined4
FUN_08002020(int param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,undefined2 *param_6,
            code *param_7,undefined4 param_8)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int extraout_r1;
  uint uVar8;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54 [4];
  int local_44;
  int local_40;
  char local_3a;
  char local_39;
  uint local_38;
  byte local_33;
  ushort local_32;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_1c = 0xffffffff;
  if ((*(int *)(param_1 + 0x6c) != 0) &&
     ((*(uint *)(param_1 + 0x6c) <= *param_3 || (*(uint *)(param_1 + 0x6c) <= param_3[1])))) {
    FUN_080027d2();
  }
  local_54[0] = 0;
  local_54[1] = 0;
  local_20 = 0;
  for (local_24 = 0; (int)local_24 < 2; local_24 = local_24 + 1) {
    local_54[2] = FUN_08000366(param_1,0,param_1,4,param_3[local_24],0,local_54 + local_24,4);
    uVar8 = FUN_08000294(local_54[local_24]);
    local_54[local_24] = uVar8;
    if ((local_54[2] != 0) && (local_54[2] != -0x54)) {
      FUN_080027d2();
    }
    if (local_54[2] != -0x54) {
      uVar8 = local_24 + 1 & DAT_08002460;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      iVar4 = FUN_0800027c(local_54[local_24],local_54[uVar8]);
      if (0 < iVar4) {
        local_20 = local_24;
      }
    }
  }
  uVar8 = local_20 & DAT_08002460;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
  }
  *param_2 = param_3[uVar8];
  uVar8 = local_20 + 1 & DAT_08002460;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
  }
  param_2[1] = param_3[uVar8];
  uVar8 = local_20 & DAT_08002460;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
  }
  param_2[2] = local_54[uVar8];
  param_2[3] = 0;
  local_28 = 0;
  do {
    if (1 < local_28) {
      return 0xffffffac;
    }
    local_2c = 0;
    local_30 = 0xffffffff;
    local_32 = 0;
    local_5c = *DAT_08002464;
    local_58 = DAT_08002464[1];
    local_33 = 0;
    local_38 = local_1c;
    local_39 = '\0';
    local_3a = '\0';
    uVar8 = FUN_080002a6(param_2[2]);
    param_2[2] = uVar8;
    local_68 = FUN_08000130(0xffffffff,param_2 + 2,4);
    uVar8 = FUN_08000294(param_2[2]);
    param_2[2] = uVar8;
    while( true ) {
      iVar4 = FUN_08000bb8(local_30);
      local_2c = local_2c + iVar4;
      local_40 = FUN_08000366(param_1,0,param_1,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c),
                              *param_2,local_2c,&local_6c,4);
      if (local_40 != 0) break;
      local_68 = FUN_08000130(local_68,&local_6c,4);
      local_6c = FUN_080002c0(local_6c);
      local_6c = local_30 ^ local_6c;
      cVar1 = FUN_08000ac6(local_6c);
      if (cVar1 != '\x01') {
        iVar4 = FUN_08000b1a(local_30);
        local_39 = iVar4 + DAT_08002468 == 0;
        goto LAB_0800263c;
      }
      iVar4 = FUN_08000bb8(local_6c);
      if (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < (uint)(iVar4 + local_2c)) goto LAB_0800263c;
      local_30 = local_6c;
      iVar4 = FUN_08000b1a(local_6c);
      if (iVar4 == 0x500) {
        local_40 = FUN_08000366(param_1,0,param_1,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c),
                                *param_2,local_2c + 4,&local_70,4);
        if (local_40 != 0) {
          if (local_40 != -0x54) {
            uVar5 = FUN_080027d2();
            return uVar5;
          }
          goto LAB_0800263c;
        }
        local_70 = FUN_08000294(local_70);
        if (local_68 != local_70) goto LAB_0800263c;
        iVar4 = FUN_08000b54(local_6c);
        local_30 = iVar4 << 0x1f ^ local_30;
        uVar5 = FUN_08000130(*(undefined4 *)(param_1 + 0x2c),&local_68,4);
        *(undefined4 *)(param_1 + 0x2c) = uVar5;
        local_1c = local_38;
        iVar4 = FUN_08000bb8(local_6c);
        param_2[3] = iVar4 + local_2c;
        param_2[4] = local_30;
        *(ushort *)(param_2 + 5) = local_32;
        param_2[6] = local_5c;
        param_2[7] = local_58;
        *(byte *)((int)param_2 + 0x17) = local_33;
        local_68 = -1;
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c);
        uVar8 = *param_2;
        iVar6 = local_2c + 4;
        iVar4 = FUN_08000bb8(local_6c);
        local_40 = FUN_08000680(param_1,0,param_1,uVar5,uVar8,iVar6,iVar4 + -4,&local_68);
        if (local_40 != 0) {
          if (local_40 != -0x54) {
            uVar5 = FUN_080027d2();
            return uVar5;
          }
          goto LAB_0800263c;
        }
        iVar4 = FUN_08000afc(local_6c);
        if (iVar4 == 0) {
          uVar8 = FUN_08000b86(local_6c);
          if (local_32 <= uVar8) {
            sVar2 = FUN_08000b86(local_6c);
            local_32 = sVar2 + 1;
          }
        }
        else {
          iVar4 = FUN_08000afc(local_6c);
          if (iVar4 == 0x400) {
            sVar2 = FUN_08000b6a(local_6c);
            local_32 = sVar2 + local_32;
            if ((DAT_08002470 | local_38 & DAT_0800246c) == local_6c) {
              local_38 = local_38 | 0x80000000;
            }
            else if (local_38 != 0xffffffff) {
              uVar8 = FUN_08000b86(local_6c);
              uVar7 = FUN_08000b86(local_38);
              if (uVar8 <= uVar7) {
                iVar4 = FUN_08000b6a(local_6c);
                local_38 = iVar4 * 0x400 + local_38;
              }
            }
          }
          else {
            iVar4 = FUN_08000afc(local_6c);
            if (iVar4 == 0x600) {
              local_33 = FUN_08000b54(local_6c);
              local_33 = local_33 & 1;
              local_40 = FUN_08000366(param_1,0,param_1,
                                      *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c),*param_2,
                                      local_2c + 4,&local_5c,8);
              if (local_40 != 0) {
                if (local_40 != -0x54) {
                  uVar5 = FUN_080027d2();
                  return uVar5;
                }
                goto LAB_0800263c;
              }
              FUN_08000a5e(&local_5c);
            }
            else {
              iVar4 = FUN_08000b38(local_6c);
              if (iVar4 == DAT_080027e0) {
                local_40 = FUN_08000366(param_1,0,param_1,
                                        *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c),*param_2,
                                        local_2c + 4,&local_64,8);
                if ((local_40 != 0) && (local_40 == -0x54)) goto LAB_0800263c;
                FUN_08000da4(&local_64);
                local_3a = '\x01';
              }
            }
          }
        }
        if (((param_5 ^ local_6c) & param_4) == 0) {
          local_78 = *param_2;
          local_74 = local_2c + 4;
          local_44 = (*param_7)(param_8,local_6c,&local_78);
          if (local_44 < 0) {
            if (local_44 != -0x54) {
              uVar5 = FUN_080027d2();
              return uVar5;
            }
            goto LAB_0800263c;
          }
          if (local_44 == 0) {
            local_38 = local_6c;
          }
          else if (((local_38 ^ local_6c) & DAT_080027e4) == 0) {
            local_38 = 0xffffffff;
          }
          else if (local_44 == 2) {
            uVar8 = FUN_08000b86(local_6c);
            uVar7 = FUN_08000b86(local_38);
            if (uVar8 <= uVar7) {
              local_38 = local_6c | 0x80000000;
            }
          }
        }
      }
    }
    if (local_40 != -0x54) {
      uVar5 = FUN_080027d2();
      return uVar5;
    }
LAB_0800263c:
    if (param_2[3] != 0) {
      *(undefined1 *)((int)param_2 + 0x16) = 0;
      if (((local_39 != '\0') &&
          (FUN_08006b98(param_2[3],*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18)),
          extraout_r1 == 0)) && (local_3a != '\0')) {
        local_7c = -1;
        local_54[3] = FUN_08000680(param_1,0,param_1,
                                   *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c),*param_2,
                                   param_2[3],local_64,&local_7c);
        if ((local_54[3] != 0) && (local_54[3] != -0x54)) {
          uVar5 = FUN_080027d2();
          return uVar5;
        }
        *(bool *)((int)param_2 + 0x16) = local_60 == local_7c;
      }
      iVar4 = FUN_08000ce4(param_1 + 0x3c,param_2);
      if (iVar4 != 0) {
        iVar4 = FUN_08000b86(*(undefined4 *)(param_1 + 0x3c));
        iVar6 = FUN_08000b86(local_1c);
        if (iVar4 == iVar6) {
          local_1c = local_1c | 0x80000000;
        }
        else if (local_1c != 0xffffffff) {
          uVar8 = FUN_08000b86(*(undefined4 *)(param_1 + 0x3c));
          uVar7 = FUN_08000b86(local_1c);
          if (uVar8 < uVar7) {
            local_1c = local_1c + DAT_080027ec;
          }
        }
      }
      if (param_6 != (undefined2 *)0x0) {
        uVar5 = FUN_08000b86(local_1c);
        uVar3 = FUN_080001c4(uVar5,(short)param_2[5]);
        *param_6 = uVar3;
      }
      iVar4 = FUN_08000ac6(local_1c);
      if (iVar4 != 0) {
        uVar5 = FUN_080027d2();
        return uVar5;
      }
      uVar8 = FUN_08000b86(local_1c);
      if (uVar8 < (ushort)param_2[5]) {
        uVar5 = FUN_080027d2();
        return uVar5;
      }
      uVar5 = FUN_080027d2();
      return uVar5;
    }
    FUN_08000960(param_2);
    uVar8 = local_20 + 1 & DAT_080027e8;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
    }
    param_2[2] = local_54[uVar8];
    local_28 = local_28 + 1;
  } while( true );
}




undefined4 FUN_080027d2(void)

{
  undefined4 in_r3;
  
  return in_r3;
}




undefined4 FUN_080027f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08002020(param_1,param_2,param_3,0xffffffff,0xffffffff,0,0,0);
  return uVar1;
}




int FUN_08002828(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_20 [12];
  int local_14;
  
  local_14 = FUN_0800140c(param_1,param_2,DAT_08002888,DAT_08002884,auStack_20);
  if ((-1 < local_14) || (local_14 == -2)) {
    if (local_14 != -2) {
      FUN_08000d24(auStack_20);
      FUN_08000be2(param_3,auStack_20);
    }
    local_14 = 0;
  }
  return local_14;
}




int FUN_0800288c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = *param_1;
  uVar5 = param_1[2];
  uVar1 = FUN_08000ba2(param_2);
  uVar1 = FUN_080001c4(uVar5,uVar1);
  iVar2 = FUN_080005d6(uVar4,0,uVar4,uVar1,*param_3,param_3[1],param_1[1],uVar1);
  if (iVar2 == 0) {
    iVar6 = param_1[2];
    iVar2 = FUN_08000ba2(param_2);
    if (iVar6 == iVar2) {
      iVar2 = 0;
    }
    else {
      uVar7 = param_1[2];
      uVar3 = FUN_08000ba2(param_2);
      if (uVar7 < uVar3) {
        iVar2 = 1;
      }
      else {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}




int FUN_0800292c(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int local_40;
  char *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  char *local_24;
  int local_20;
  char *local_1c;
  
  local_1c = (char *)*param_3;
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = (short)DAT_08002b24;
  }
  local_20 = DAT_08002b28;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x24);
LAB_08002960:
  do {
    while( true ) {
      iVar1 = FUN_08006e4a(local_1c,DAT_08002b2c);
      local_1c = local_1c + iVar1;
      local_2c = FUN_08006e28(local_1c,DAT_08002b2c);
      if (((local_2c != 1) || (*local_1c != *DAT_08002b30)) &&
         ((local_2c != 2 || (iVar1 = FUN_08006de0(local_1c,DAT_08002b34,2), iVar1 != 0)))) break;
      local_1c = local_1c + local_2c;
    }
    local_24 = local_1c + local_2c;
    local_28 = 1;
    while( true ) {
      iVar1 = FUN_08006e4a(local_24,DAT_08002b2c);
      local_24 = local_24 + iVar1;
      local_30 = FUN_08006e28(local_24,DAT_08002b2c);
      if (local_30 == 0) break;
      if ((local_30 == 2) && (iVar1 = FUN_08006de0(local_24,DAT_08002b34,2), iVar1 == 0)) {
        local_28 = local_28 + -1;
        if (local_28 == 0) {
          local_1c = local_24 + local_30;
          goto LAB_08002960;
        }
      }
      else {
        local_28 = local_28 + 1;
      }
      local_24 = local_24 + local_30;
    }
    if (*local_1c == '\0') {
      return local_20;
    }
    *param_3 = local_1c;
    iVar1 = FUN_08000b38(local_20);
    if (iVar1 != 2) {
      return -0x14;
    }
    iVar1 = FUN_08000b86(local_20);
    if (iVar1 != DAT_08002b24) {
      iVar1 = FUN_08000b86(local_20);
      local_34 = FUN_0800140c(param_1,param_2,DAT_08002b3c,DAT_08002b38 | iVar1 << 10,param_2 + 0x18
                             );
      if (local_34 < 0) {
        return local_34;
      }
      FUN_08000a5e(param_2 + 0x18);
    }
    while( true ) {
      iVar1 = FUN_08006e0c(local_1c,0x2f);
      if (iVar1 == 0) {
        puVar2 = param_4;
      }
      else {
        puVar2 = (undefined2 *)0x0;
      }
      local_3c = local_1c;
      local_38 = local_2c;
      local_40 = param_1;
      local_20 = FUN_08002020(param_1,param_2,param_2 + 0x18,0x78000000,local_2c,puVar2,DAT_08002b40
                              ,&local_40);
      if (local_20 < 0) {
        return local_20;
      }
      if (local_20 != 0) break;
      if (*(char *)(param_2 + 0x17) != '\x01') {
        return -2;
      }
    }
    local_1c = local_1c + local_2c;
  } while( true );
}




int FUN_08002b44(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08000838(param_1,param_1 + 0x10,param_1,0,*param_2,param_2[1],param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = FUN_08000130(param_2[3],param_3,param_4);
    param_2[3] = uVar2;
    param_2[1] = param_2[1] + param_4;
    iVar1 = 0;
  }
  return iVar1;
}




int FUN_08002bb2(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 uStack_25;
  undefined4 local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_18 = FUN_08000bb8(param_3);
  if (*(uint *)(param_2 + 0x14) < (uint)(*(int *)(param_2 + 4) + local_18)) {
    local_1c = -0x1c;
  }
  else {
    local_24 = FUN_080002d4(*(uint *)(param_2 + 8) ^ param_3 & 0x7fffffff);
    local_1c = FUN_08002b44(param_1,param_2,&local_24,4);
    if (local_1c == 0) {
      if ((int)param_3 < 0) {
        local_20 = param_4;
        for (local_14 = 0; local_1c = 0, local_14 < local_18 - 4U; local_14 = local_14 + 1) {
          local_1c = FUN_08000366(param_1,0,param_1,(local_18 - local_14) + -4,*local_20,
                                  local_20[1] + local_14,&uStack_25,1);
          if (local_1c != 0) {
            return local_1c;
          }
          iVar1 = FUN_08002b44(param_1,param_2,&uStack_25,1);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
      else {
        iVar1 = FUN_08002b44(param_1,param_2,param_4,local_18 + -4);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      *(uint *)(param_2 + 8) = param_3 & 0x7fffffff;
      local_1c = 0;
    }
  }
  return local_1c;
}




int FUN_08002cc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_45;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  uVar1 = FUN_080001c4(param_2[1] + 0x14,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c));
  local_28 = FUN_08000204(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
  local_1c = 0;
  local_20 = 0;
  while ((uint)param_2[1] < local_28) {
    iVar2 = FUN_080001c4((local_28 - param_2[1]) + -4,DAT_08002fbc);
    local_24 = iVar2 + param_2[1] + 4;
    if (local_24 < local_28) {
      local_24 = FUN_080001c4(local_24,local_28 - 0x14);
    }
    local_45 = 0xff;
    if ((local_28 <= local_24) &&
       (local_24 <=
        (uint)(*(int *)(*(int *)(param_1 + 0x68) + 0x1c) - *(int *)(*(int *)(param_1 + 0x68) + 0x18)
              ))) {
      local_34 = FUN_08000366(param_1,0,param_1,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18),
                              *param_2,local_24,&local_45,1);
      if ((local_34 != 0) && (local_34 != -0x54)) {
        return local_34;
      }
      local_58 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18);
      local_54 = 0xffffffff;
      local_34 = FUN_08000680(param_1,0,param_1,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18),
                              *param_2,local_24,local_58,&local_54);
      if ((local_34 != 0) && (local_34 != -0x54)) {
        return local_34;
      }
      FUN_08000dd4(&local_58);
      local_34 = FUN_08002bb2(param_1,param_2,DAT_08002fc0,&local_58);
      if (local_34 != 0) {
        return local_34;
      }
    }
    local_38 = (local_24 - param_2[1]) - 4 | (((byte)~local_45 >> 7) + 0x500) * 0x100000 |
               DAT_08002fc4;
    local_50 = FUN_080002d4(local_38 ^ param_2[2]);
    uVar1 = FUN_08000130(param_2[3],&local_50,4);
    param_2[3] = uVar1;
    local_4c = FUN_080002a6(param_2[3]);
    local_3c = FUN_08000838(param_1,param_1 + 0x10,param_1,0,*param_2,param_2[1],&local_50,8);
    if (local_3c != 0) {
      return local_3c;
    }
    if (local_1c == 0) {
      local_1c = param_2[1] + 4;
      local_20 = param_2[3];
    }
    param_2[1] = local_24;
    param_2[2] = ((~(uint)local_45 & 0xff) >> 7) << 0x1f ^ local_38;
    param_2[3] = 0xffffffff;
    if (((local_28 <= local_24) ||
        ((uint)(*(int *)(param_1 + 0x14) + *(int *)(*(int *)(param_1 + 0x68) + 0x28)) <= local_24))
       && (local_40 = FUN_080007e2(param_1,param_1 + 0x10,param_1,0), local_40 != 0)) {
      return local_40;
    }
  }
  local_2c = param_2[4];
  local_44 = -1;
  local_30 = FUN_08000680(param_1,0,param_1,local_1c + 4,*param_2,local_2c,local_1c - local_2c,
                          &local_44);
  if (local_30 != 0) {
    return local_30;
  }
  if (local_20 != local_44) {
    return -0x54;
  }
  iVar2 = FUN_08000680(param_1,0,param_1,4,*param_2,local_1c,4,&local_44);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (local_44 == 0) {
    return 0;
  }
  return -0x54;
}




int FUN_08002fc8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (1 < local_14) {
      param_2[2] = 0;
      iVar1 = FUN_08000366(param_1,0,param_1,4,*param_2,0,param_2 + 2,4);
      uVar2 = FUN_08000294(param_2[2]);
      param_2[2] = uVar2;
      if ((iVar1 == 0) || (iVar1 == -0x54)) {
        if (0 < *(int *)(*(int *)(param_1 + 0x68) + 0x24)) {
          uVar2 = FUN_08000204(param_2[2],*(int *)(*(int *)(param_1 + 0x68) + 0x24) + 1U | 1);
          param_2[2] = uVar2;
        }
        param_2[3] = 4;
        param_2[4] = 0xffffffff;
        *(undefined2 *)(param_2 + 5) = 0;
        param_2[6] = 0xffffffff;
        param_2[7] = 0xffffffff;
        *(undefined1 *)((int)param_2 + 0x16) = 0;
        *(undefined1 *)((int)param_2 + 0x17) = 0;
        iVar1 = 0;
      }
      return iVar1;
    }
    uVar3 = local_14 + 1U & DAT_080030c4;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    iVar1 = FUN_08001124(param_1,param_2 + uVar3);
    if (iVar1 != 0) break;
    local_14 = local_14 + 1;
  }
  return iVar1;
}




int FUN_080030c8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                short param_6,undefined2 param_7)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_18 = FUN_08002fc8(param_1,&local_38);
  if (local_18 == 0) {
    local_21 = *(undefined1 *)(param_2 + 0x17);
    local_20 = *(undefined4 *)(param_2 + 0x18);
    local_1c = *(undefined4 *)(param_2 + 0x1c);
    local_14 = local_18;
    local_18 = FUN_0800322c(param_1,&local_38,param_3,param_4,param_5,param_6,param_7);
    if (-1 < local_18) {
      *(undefined4 *)(param_2 + 0x18) = local_38;
      *(undefined4 *)(param_2 + 0x1c) = local_34;
      *(undefined1 *)(param_2 + 0x17) = 1;
      iVar1 = FUN_080009b6(param_2,param_1 + 0x20);
      if ((iVar1 == 0) && (param_6 == 0)) {
        *(undefined4 *)(param_1 + 0x20) = local_38;
        *(undefined4 *)(param_1 + 0x24) = local_34;
      }
      local_18 = 0;
    }
  }
  return local_18;
}




undefined4 FUN_0800318a(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_08000bb8(param_2);
  *param_1 = iVar1 + *param_1;
  return 0;
}




undefined4 FUN_080031b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08002bb2(*param_1,param_1[1],param_2,param_3);
  return uVar1;
}




undefined1 FUN_080031e2(int param_1,int param_2)

{
  int extraout_r1;
  undefined1 uVar1;
  
  if ((*(int *)(*(int *)(param_1 + 0x68) + 0x24) < 1) ||
     (FUN_08006b98(*(int *)(param_2 + 8) + 1,*(int *)(*(int *)(param_1 + 0x68) + 0x24) + 1U | 1),
     extraout_r1 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




uint FUN_0800322c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 short param_6,short param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_58 [3];
  int local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  char local_1a;
  byte local_19;
  
  local_19 = 0;
  local_1a = FUN_080031e2(param_1,param_2);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  if (local_1a == '\0') goto LAB_08003288;
  local_2c = 0;
  local_28 = 1;
  iVar2 = FUN_080009b6(param_2,&local_2c);
  if (iVar2 == 0) goto LAB_08003288;
LAB_08003572:
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          local_19 = 1;
          FUN_08000320(param_1,param_1 + 0x10);
          local_6c = 0;
          local_68 = 1;
          iVar2 = FUN_080009b6(param_2,&local_6c);
          if (iVar2 == 0) {
            return 0xffffffe4;
          }
          local_20 = FUN_08001124(param_1,param_2 + 4);
          if ((local_20 != 0) && ((local_20 != 0xffffffe4 || (local_1a != '\x01')))) {
            return local_20;
          }
          local_1a = '\0';
LAB_08003288:
          local_44 = *(undefined4 *)(param_2 + 4);
          local_40 = 0;
          local_3c = 0xffffffff;
          local_38 = 0xffffffff;
          local_34 = 0;
          if (*(int *)(*(int *)(param_1 + 0x68) + 0x4c) == 0) {
            local_30 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c);
          }
          else {
            local_30 = *(int *)(*(int *)(param_1 + 0x68) + 0x4c);
          }
          local_30 = local_30 + -8;
          local_24 = FUN_08000938(param_1,*(undefined4 *)(param_2 + 4));
          if (local_24 == 0) break;
          if (local_24 != 0xffffffac) {
            return local_24;
          }
          local_24 = 0xffffffac;
        }
        uVar3 = FUN_080002a6(*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_2 + 8) = uVar3;
        local_24 = FUN_08002b44(param_1,&local_44,param_2 + 8,4);
        uVar3 = FUN_08000294(*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_2 + 8) = uVar3;
        if (local_24 == 0) break;
        if (local_24 != 0xffffffac) {
          return local_24;
        }
      }
      local_48 = &local_44;
      local_4c = param_1;
      local_24 = FUN_080016d4(param_1,param_5,0,0xffffffff,param_3,param_4,DAT_08003600,0,param_6,
                              param_7,(int)-param_6,DAT_080035fc,&local_4c);
      if (local_24 == 0) break;
      if (local_24 != 0xffffffac) {
        return local_24;
      }
      local_24 = 0xffffffac;
    }
    cVar1 = FUN_08000986(param_2 + 0x18);
    if (cVar1 == '\x01') break;
    FUN_08000a92(param_2 + 0x18);
    local_24 = FUN_08002bb2(param_1,&local_44,
                            DAT_08003604 | (*(byte *)(param_2 + 0x17) + 0x600) * 0x100000,
                            param_2 + 0x18);
    FUN_08000a5e(param_2 + 0x18);
    if (local_24 == 0) break;
    if (local_24 != 0xffffffac) {
      return local_24;
    }
  }
  FUN_08006dfc(local_58,0,0xc);
  if (local_19 != 1) {
    FUN_08000be2(local_58,param_1 + 0x3c);
    FUN_08000be2(local_58,param_1 + 0x30);
  }
  FUN_08000be2(local_58,param_1 + 0x48);
  local_58[0] = local_58[0] & 0xfffffc00;
  local_24 = FUN_08002828(param_1,param_2,local_58);
  if (local_24 != 0) {
    return local_24;
  }
  cVar1 = FUN_08000c28(local_58);
  if (cVar1 != '\x01') {
    FUN_08000d64(local_58);
    local_24 = FUN_08002bb2(param_1,&local_44,DAT_08003608,local_58);
    if (local_24 != 0) {
      if (local_24 != 0xffffffac) {
        return local_24;
      }
      local_24 = 0xffffffac;
      goto LAB_08003572;
    }
  }
  local_24 = FUN_08002cc0(param_1,&local_44);
  if (local_24 == 0) {
    FUN_08000960(param_2);
    *(short *)(param_2 + 0x14) = param_7 - param_6;
    *(undefined4 *)(param_2 + 0xc) = local_40;
    *(undefined4 *)(param_2 + 0x10) = local_3c;
    FUN_08006dfc(param_1 + 0x48,0,0xc);
    if (local_19 != 1) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
    }
    return (uint)local_19;
  }
  if (local_24 != 0xffffffac) {
    return local_24;
  }
  local_24 = 0xffffffac;
  goto LAB_08003572;
}




int FUN_0800360c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,ushort param_6,ushort param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  do {
    for (local_14 = (uint)param_6; 1 < param_7 - local_14;
        local_14 = local_14 + (param_7 - local_14 >> 1)) {
      local_28 = 0;
      local_18 = FUN_080016d4(param_1,param_5,0,0xffffffff,param_3,param_4,DAT_08003818,0,
                              local_14 & 0xffff,param_7,(int)(short)-(short)local_14,DAT_08003814,
                              &local_28);
      if (local_18 != 0) {
        return local_18;
      }
      if (param_7 - local_14 < 0xff) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c);
        if (*(int *)(*(int *)(param_1 + 0x68) + 0x4c) == 0) {
          uVar3 = *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
        }
        else {
          uVar3 = *(uint *)(*(int *)(param_1 + 0x68) + 0x4c);
        }
        uVar1 = FUN_08000204(uVar3 >> 1,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
        uVar3 = FUN_080001c4(iVar2 + -0x28,uVar1);
        if (local_28 <= uVar3) break;
      }
    }
    if (local_14 == param_6) {
LAB_0800374c:
      iVar2 = FUN_080031e2(param_1,param_2);
      if (iVar2 != 0) {
        local_30 = 0;
        local_2c = 1;
        iVar2 = FUN_080009b6(param_2,&local_30);
        if (iVar2 == 0) {
          local_20 = FUN_080068c0(param_1);
          if (local_20 < 0) {
            return local_20;
          }
          if (*(uint *)(param_1 + 0x6c) >> 3 < (uint)(*(int *)(param_1 + 0x6c) - local_20)) {
            local_24 = FUN_080030c8(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
            if ((local_24 != 0) && (local_24 != -0x1c)) {
              return local_24;
            }
            if (local_24 == 0) {
              param_7 = 1;
            }
          }
        }
      }
      iVar2 = FUN_0800322c(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return iVar2;
    }
    local_1c = FUN_080030c8(param_1,param_2,param_3,param_4,param_5,local_14 & 0xffff,param_7);
    if ((local_1c != 0) && (local_1c != -0x1c)) {
      return local_1c;
    }
    if (local_1c != 0) goto LAB_0800374c;
    param_7 = (ushort)local_14;
  } while( true );
}




int FUN_0800381c(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
                int param_6)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_6c [3];
  int local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  char local_1d;
  int local_1c;
  
  local_1c = 0;
  local_1d = '\0';
  for (local_24 = 0; local_24 < param_5; local_24 = local_24 + 1) {
    iVar4 = FUN_08000b38(*(undefined4 *)(param_4 + local_24 * 8));
    if (iVar4 == DAT_08003bb4) {
      *(short *)(param_2 + 5) = *(short *)(param_2 + 5) + 1;
    }
    else {
      iVar4 = FUN_08000b38(*(undefined4 *)(param_4 + local_24 * 8));
      if (iVar4 == DAT_08003bb8) {
        *(short *)(param_2 + 5) = *(short *)(param_2 + 5) + -1;
        local_1d = '\x01';
      }
      else {
        iVar4 = FUN_08000afc(*(undefined4 *)(param_4 + local_24 * 8));
        if (iVar4 == 0x600) {
          param_2[6] = **(undefined4 **)(param_4 + local_24 * 8 + 4);
          param_2[7] = *(undefined4 *)(*(int *)(param_4 + local_24 * 8 + 4) + 4);
          bVar2 = FUN_08000b54(*(undefined4 *)(param_4 + local_24 * 8));
          *(byte *)((int)param_2 + 0x17) = bVar2 & 1;
          FUN_08000a5e(param_2 + 6);
        }
      }
    }
  }
  if ((local_1d != '\0') && (*(short *)(param_2 + 5) == 0)) {
    local_30 = FUN_08006050(param_1,param_2,param_6);
    if ((local_30 != 0) && (local_30 != -2)) {
      return local_30;
    }
    if ((local_30 != -2) && (*(char *)(param_6 + 0x17) != '\0')) {
      local_1c = 2;
      goto LAB_08003b98;
    }
  }
  if (*(char *)((int)param_2 + 0x16) != '\0') {
    local_58 = *param_2;
    local_54 = param_2[3];
    local_50 = param_2[4];
    local_4c = 0xffffffff;
    local_48 = param_2[3];
    if (*(int *)(*(int *)(param_1 + 0x68) + 0x4c) == 0) {
      local_44 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c);
    }
    else {
      local_44 = *(int *)(*(int *)(param_1 + 0x68) + 0x4c);
    }
    local_44 = local_44 + -8;
    FUN_08000a92(param_2 + 6);
    local_5c = &local_58;
    local_60 = param_1;
    local_34 = FUN_080016d4(param_1,param_2,param_2[3],param_2[4],param_4,param_5,0,0,0,0,0,
                            DAT_08003bbc,&local_60);
    FUN_08000a5e(param_2 + 6);
    if (local_34 == 0) {
      FUN_08006dfc(local_6c,0,0xc);
      FUN_08000be2(local_6c,param_1 + 0x30);
      FUN_08000be2(local_6c,param_1 + 0x3c);
      FUN_08000be2(local_6c,param_1 + 0x48);
      local_6c[0] = local_6c[0] & 0xfffffc00;
      cVar3 = FUN_08000c28(local_6c);
      if (cVar3 != '\x01') {
        local_34 = FUN_08002828(param_1,param_2,local_6c);
        if (local_34 != 0) {
          return local_34;
        }
        FUN_08000d64(local_6c);
        local_34 = FUN_08002bb2(param_1,&local_58,DAT_08003bc0,local_6c);
        if (local_34 != 0) {
          if ((local_34 != -0x1c) && (local_34 != -0x54)) {
            return local_34;
          }
          goto LAB_08003b54;
        }
      }
      local_34 = FUN_08002cc0(param_1,&local_58);
      if (local_34 == 0) {
        param_2[3] = local_54;
        param_2[4] = local_50;
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
        FUN_08006dfc(param_1 + 0x48,0,0xc);
        goto LAB_08003b98;
      }
      if ((local_34 != -0x1c) && (local_34 != -0x54)) {
        return local_34;
      }
    }
    else if ((local_34 != -0x1c) && (local_34 != -0x54)) {
      return local_34;
    }
  }
LAB_08003b54:
  FUN_08000320(param_1,param_1 + 0x10);
  local_1c = FUN_0800360c(param_1,param_2,param_4,param_5,param_2,0,*(undefined2 *)(param_2 + 5));
  if (local_1c < 0) {
    return local_1c;
  }
LAB_08003b98:
  local_40 = *param_3;
  local_3c = param_3[1];
  local_28 = *(undefined4 **)(param_1 + 0x28);
  do {
    if (local_28 == (undefined4 *)0x0) {
      return local_1c;
    }
    iVar4 = FUN_080009b6(local_28 + 2,&local_40);
    if (iVar4 == 0) {
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      local_28[2] = *param_2;
      local_28[3] = uVar6;
      local_28[4] = uVar7;
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      local_28[5] = param_2[3];
      local_28[6] = uVar6;
      local_28[7] = uVar7;
      uVar6 = param_2[7];
      local_28[8] = param_2[6];
      local_28[9] = uVar6;
      if (param_3 != local_28 + 2) {
        for (local_2c = 0; local_2c < param_5; local_2c = local_2c + 1) {
          iVar4 = FUN_08000b38(*(undefined4 *)(param_4 + local_2c * 8));
          if ((iVar4 == DAT_08003d78) &&
             (uVar1 = *(ushort *)(local_28 + 1),
             uVar5 = FUN_08000b86(*(undefined4 *)(param_4 + local_2c * 8)), uVar1 == uVar5)) {
            local_28[2] = 0xffffffff;
            local_28[3] = 0xffffffff;
          }
          else {
            iVar4 = FUN_08000b38(*(undefined4 *)(param_4 + local_2c * 8));
            if ((iVar4 == DAT_08003d78) &&
               (uVar1 = *(ushort *)(local_28 + 1),
               uVar5 = FUN_08000b86(*(undefined4 *)(param_4 + local_2c * 8)), uVar5 < uVar1)) {
              *(short *)(local_28 + 1) = *(short *)(local_28 + 1) + -1;
              if (*(char *)((int)local_28 + 6) == '\x02') {
                local_28[10] = local_28[10] + -1;
              }
            }
            else {
              iVar4 = FUN_08000b38(*(undefined4 *)(param_4 + local_2c * 8));
              if (((iVar4 == DAT_08003d7c) &&
                  (uVar1 = *(ushort *)(local_28 + 1),
                  uVar5 = FUN_08000b86(*(undefined4 *)(param_4 + local_2c * 8)), uVar5 <= uVar1)) &&
                 (*(short *)(local_28 + 1) = *(short *)(local_28 + 1) + 1,
                 *(char *)((int)local_28 + 6) == '\x02')) {
                local_28[10] = local_28[10] + 1;
              }
            }
          }
        }
      }
      while ((*(ushort *)(local_28 + 7) <= *(ushort *)(local_28 + 1) &&
             (*(char *)((int)local_28 + 0x1f) != '\0'))) {
        iVar4 = FUN_080009b6(local_28 + 8,param_1 + 0x20);
        if (iVar4 != 0) {
          *(short *)(local_28 + 1) = *(short *)(local_28 + 1) - *(short *)(local_28 + 7);
        }
        local_38 = FUN_080027f0(param_1,local_28 + 2,local_28 + 8);
        if (local_38 != 0) {
          return local_38;
        }
      }
    }
    local_28 = (undefined4 *)*local_28;
  } while( true );
}




int FUN_08003d80(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint local_cc [3];
  undefined4 *local_c0;
  uint local_ac [3];
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_2d;
  int local_2c;
  ushort local_28;
  ushort local_26;
  int local_24;
  undefined4 *local_20;
  char local_19;
  int local_18;
  undefined4 *local_14;
  
  for (local_14 = *(undefined4 **)(param_1 + 0x28); local_14 != (undefined4 *)0x0;
      local_14 = (undefined4 *)*local_14) {
    if ((((param_2 != local_14 + 2) && (iVar1 = FUN_080009b6(local_14 + 2,param_2), iVar1 == 0)) &&
        (*(char *)((int)local_14 + 6) == '\x01')) &&
       (((local_14[0xc] & 0x100000) != 0 &&
        (*(uint *)(*(int *)(param_1 + 0x68) + 0x28) < (uint)local_14[0xb])))) {
      local_3c = FUN_08004e20(param_1,local_14);
      if (local_3c != 0) {
        return local_3c;
      }
      local_3c = FUN_08004e70(param_1,local_14);
      if (local_3c != 0) {
        return local_3c;
      }
    }
  }
  local_44 = *param_2;
  local_40 = param_2[1];
  local_64 = *param_2;
  local_60 = param_2[1];
  uStack_5c = param_2[2];
  local_58 = param_2[3];
  uStack_54 = param_2[4];
  uStack_50 = param_2[5];
  local_4c = param_2[6];
  uStack_48 = param_2[7];
  local_18 = FUN_0800381c(param_1,&local_64,param_2,param_3,param_4,&local_84);
  if (local_18 < 0) {
    return local_18;
  }
  iVar1 = FUN_080009b6(param_2,&local_44);
  if (iVar1 == 0) {
    *param_2 = local_64;
    param_2[1] = local_60;
    param_2[2] = uStack_5c;
    param_2[3] = local_58;
    param_2[4] = uStack_54;
    param_2[5] = uStack_50;
    param_2[6] = local_4c;
    param_2[7] = uStack_48;
  }
  if (local_18 == 2) {
    local_2c = FUN_08002828(param_1,param_2,param_1 + 0x48);
    if (local_2c != 0) {
      return local_2c;
    }
    local_44 = local_84;
    local_40 = local_80;
    FUN_08000a92(param_2 + 6);
    local_8c = DAT_0800424c | (*(byte *)((int)param_2 + 0x17) + 0x600) * 0x100000;
    local_88 = param_2 + 6;
    local_18 = FUN_0800381c(param_1,&local_84,&local_44,&local_8c,1,0);
    FUN_08000a5e(param_2 + 6);
    if (local_18 < 0) {
      return local_18;
    }
    local_64 = local_84;
    local_60 = local_80;
    uStack_5c = uStack_7c;
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    local_4c = local_6c;
    uStack_48 = uStack_68;
  }
  local_19 = '\0';
  do {
    while( true ) {
      if (local_18 != 1) {
        if (local_19 == '\0') {
          iVar1 = 0;
        }
        else {
          iVar1 = 3;
        }
        return iVar1;
      }
      local_18 = 0;
      iVar1 = FUN_080009b6(&local_44,param_1 + 0x20);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x20) = local_64;
        *(undefined4 *)(param_1 + 0x24) = local_60;
      }
      for (local_20 = *(undefined4 **)(param_1 + 0x28); local_20 != (undefined4 *)0x0;
          local_20 = (undefined4 *)*local_20) {
        iVar1 = FUN_080009b6(&local_44,local_20 + 2);
        if (iVar1 == 0) {
          local_20[2] = local_64;
          local_20[3] = local_60;
        }
        if ((*(char *)((int)local_20 + 6) == '\x02') &&
           (iVar1 = FUN_080009b6(&local_44,local_20 + 0xb), iVar1 == 0)) {
          local_20[0xb] = local_64;
          local_20[0xc] = local_60;
        }
      }
      local_24 = FUN_0800619c(param_1,&local_44,&local_84);
      if ((local_24 < 0) && (local_24 != -2)) {
        return local_24;
      }
      local_2d = local_24 != -2;
      if (local_24 != -2) break;
LAB_080041ce:
      local_38 = FUN_08006050(param_1,&local_44,&local_84);
      if ((local_38 != 0) && (local_38 != -2)) {
        return local_38;
      }
      if (local_38 != -2) {
        iVar1 = FUN_08000c5e(param_1 + 0x30);
        if ((iVar1 != 0) && (local_38 = FUN_080062c4(param_1,(int)-local_2d), local_38 != 0)) {
          return local_38;
        }
        local_28 = (ushort)DAT_08004368;
        iVar1 = FUN_08000ce4(param_1 + 0x30,&local_84);
        if (iVar1 != 0) {
          local_28 = FUN_08000b86(*(undefined4 *)(param_1 + 0x30));
          FUN_0800630c(param_1,DAT_08004368,0);
        }
        local_44 = local_84;
        local_40 = local_80;
        FUN_08000a92(&local_64);
        if (local_28 == DAT_08004368) {
          local_cc[0] = 0;
        }
        else {
          local_cc[0] = DAT_0800436c | (uint)local_28 << 10;
        }
        local_cc[1] = 0;
        local_cc[2] = DAT_08004370 | ((uStack_70 >> 0x18) + 0x600) * 0x100000;
        local_c0 = &local_64;
        local_18 = FUN_0800381c(param_1,&local_84,&local_44,local_cc,2,0);
        FUN_08000a5e(&local_64);
        if (local_18 < 0) {
          return local_18;
        }
        local_64 = local_84;
        local_60 = local_80;
        uStack_5c = uStack_7c;
        local_58 = local_78;
        uStack_54 = uStack_74;
        uStack_50 = uStack_70;
        local_4c = local_6c;
        uStack_48 = uStack_68;
      }
    }
    local_34 = FUN_080062c4(param_1,1);
    if (local_34 != 0) {
      return local_34;
    }
    local_26 = (ushort)DAT_08004250;
    iVar1 = FUN_08000ce4(param_1 + 0x30,&local_84);
    if (iVar1 != 0) {
      local_26 = FUN_08000b86(*(undefined4 *)(param_1 + 0x30));
      FUN_0800630c(param_1,DAT_08004250,0);
      uVar2 = FUN_08000b86(local_24);
      if (local_26 < uVar2) {
        local_24 = local_24 + DAT_08004254;
      }
    }
    local_9c = local_84;
    local_98 = local_80;
    FUN_08000a92(&local_64);
    if (local_26 == DAT_08004250) {
      local_ac[0] = 0;
    }
    else {
      local_ac[0] = DAT_08004258 | (uint)local_26 << 10;
    }
    local_ac[1] = 0;
    local_ac[2] = local_24;
    local_a0 = &local_64;
    local_18 = FUN_0800381c(param_1,&local_84,&local_9c,local_ac,2,0);
    FUN_08000a5e(&local_64);
    if (local_18 < 0) {
      return local_18;
    }
    if (local_18 != 1) goto LAB_080041ce;
    local_44 = local_9c;
    local_40 = local_98;
    local_64 = local_84;
    local_60 = local_80;
    uStack_5c = uStack_7c;
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    local_4c = local_6c;
    uStack_48 = uStack_68;
    local_19 = '\x01';
  } while( true );
}




int FUN_08004374(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_08003d80(param_1,param_2,param_3,param_4);
  if (-1 < iVar1) {
    if ((iVar1 != 0) && (iVar1 = FUN_08006500(param_1,0), iVar1 != 0)) {
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}




int FUN_080043c4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  iVar4 = *(int *)(*(int *)(param_1 + 0x68) + 0x1c) + -8;
  iVar1 = FUN_08006a8c(iVar3,iVar4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_08000264(iVar1 + -1);
    iVar1 = FUN_08006a8c(iVar3 + (iVar1 + 2) * -4,iVar4);
    iVar2 = FUN_08000264(iVar1);
    *param_2 = (iVar3 - iVar1 * iVar4) + iVar2 * -4;
  }
  return iVar1;
}




int FUN_0800443a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (param_5 == 0) {
    *param_7 = 0xffffffff;
    *param_8 = 0;
  }
  else {
    local_24 = param_5 + -1;
    local_38 = param_4;
    local_34 = param_3;
    local_30 = param_2;
    local_2c = param_1;
    local_14 = FUN_080043c4(param_1,&local_24);
    local_18 = FUN_080043c4(local_2c,&param_6);
    for (; local_18 < local_14; local_14 = local_14 - (1 << (local_1c & 0xff))) {
      iVar1 = FUN_0800022a((local_14 - local_18) + 1);
      uVar2 = FUN_0800024c(local_14);
      local_1c = FUN_080001c4(iVar1 + -1,uVar2);
      local_20 = FUN_08000366(local_2c,local_30,local_34,4,local_38,local_1c << 2,&local_38,4);
      local_38 = FUN_08000294(local_38);
      if (local_20 != 0) {
        return local_20;
      }
    }
    *param_7 = local_38;
    *param_8 = param_6;
  }
  return 0;
}




int FUN_0800451e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 *param_6,uint *param_7)

{
  int iVar1;
  undefined1 uStack_31;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  do {
    local_1c = FUN_08001124(param_1,&local_28);
    if (local_1c != 0) {
      return local_1c;
    }
    local_1c = FUN_08000938(param_1,local_28);
    if (local_1c == 0) {
      if (param_5 == 0) {
        *param_6 = local_28;
        *param_7 = 0;
        return 0;
      }
      local_2c = param_5 - 1;
      local_20 = FUN_080043c4(param_1,&local_2c);
      local_2c = local_2c + 1;
      if (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) == local_2c) {
        local_20 = local_20 + 1;
        iVar1 = FUN_0800024c(local_20);
        local_24 = iVar1 + 1;
        local_18 = 0;
        local_30 = param_4;
        while( true ) {
          if (local_24 <= local_18) {
            *param_6 = local_28;
            *param_7 = local_24 << 2;
            return 0;
          }
          local_30 = FUN_080002a6(local_30);
          local_1c = FUN_08000838(param_1,param_2,param_3,1,local_28,local_18 << 2,&local_30,4);
          local_30 = FUN_08000294(local_30);
          if (local_1c != 0) break;
          if (local_18 != local_24 - 1) {
            local_1c = FUN_08000366(param_1,0,param_3,4,local_30,local_18 << 2,&local_30,4);
            local_30 = FUN_08000294(local_30);
            if (local_1c != 0) {
              return local_1c;
            }
          }
          local_18 = local_18 + 1;
        }
        if (local_1c != -0x54) {
          return local_1c;
        }
      }
      else {
        local_14 = 0;
        while( true ) {
          if (local_2c <= local_14) {
            *param_6 = local_28;
            *param_7 = local_2c;
            return 0;
          }
          local_1c = FUN_08000366(param_1,0,param_3,local_2c - local_14,param_4,local_14,&uStack_31,
                                  1);
          if (local_1c != 0) {
            return local_1c;
          }
          iVar1 = FUN_08000838(param_1,param_2,param_3,1,local_28,local_14,&uStack_31,1);
          if (iVar1 != 0) break;
          local_14 = local_14 + 1;
          local_1c = 0;
        }
        if (iVar1 != -0x54) {
          return iVar1;
        }
        local_1c = -0x54;
      }
    }
    else {
      if (local_1c != -0x54) {
        return local_1c;
      }
      local_1c = -0x54;
    }
    FUN_08000320(param_1,param_2);
  } while( true );
}




int FUN_0800472c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                code *param_6,undefined4 param_7)

{
  int local_40;
  int local_2c [4];
  int local_1c;
  int local_18;
  uint local_14;
  
  if (param_5 == 0) {
    local_1c = 0;
  }
  else {
    local_2c[2] = param_5 + -1;
    local_14 = FUN_080043c4(param_1,local_2c + 2);
    local_40 = param_4;
    while (local_1c = (*param_6)(param_7,local_40), local_1c == 0) {
      if (local_14 == 0) {
        return 0;
      }
      local_2c[3] = 2 - (local_14 & 1);
      local_1c = FUN_08000366(param_1,param_2,param_3,local_2c[3] * 4,local_40,0,local_2c,
                              local_2c[3] * 4);
      local_2c[0] = FUN_08000294(local_2c[0]);
      local_2c[1] = FUN_08000294(local_2c[1]);
      if (local_1c != 0) {
        return local_1c;
      }
      for (local_18 = 0; local_18 < local_2c[3] + -1; local_18 = local_18 + 1) {
        local_1c = (*param_6)(param_7,local_2c[local_18]);
        if (local_1c != 0) {
          return local_1c;
        }
      }
      local_40 = local_2c[local_2c[3] + -1];
      local_14 = local_14 - local_2c[3];
    }
  }
  return local_1c;
}




uint FUN_08004834(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_6c;
  int local_68;
  int local_64;
  uint local_44 [3];
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_6c = param_3;
  local_68 = param_2;
  local_64 = param_1;
  if (((param_4 & 2) != 0) && (local_20 = FUN_08006848(param_1), local_20 != 0)) {
    return local_20;
  }
  *(undefined4 *)(local_68 + 0x50) = param_5;
  *(uint *)(local_68 + 0x30) = param_4;
  *(undefined4 *)(local_68 + 0x34) = 0;
  *(undefined4 *)(local_68 + 0x3c) = 0;
  *(undefined4 *)(local_68 + 0x4c) = 0;
  local_18 = FUN_0800292c(local_64,local_68 + 8,&local_6c,local_68 + 4);
  if (((int)local_18 < 0) &&
     ((local_18 != 0xfffffffe || (*(ushort *)(local_68 + 4) == DAT_08004be0)))) {
    local_14 = local_18;
    goto LAB_08004bbc;
  }
  *(undefined1 *)(local_68 + 6) = 1;
  FUN_08000f84(local_64,local_68);
  if (local_18 == 0xfffffffe) {
    if ((param_4 & 0x100) == 0) {
      local_14 = 0xfffffffe;
      goto LAB_08004bbc;
    }
    local_24 = FUN_08006ea6(local_6c);
    if (*(uint *)(local_64 + 0x70) < local_24) {
      local_14 = 0xffffffdc;
      goto LAB_08004bbc;
    }
    local_44[0] = DAT_08004be4 | (uint)*(ushort *)(local_68 + 4) << 10;
    local_44[1] = 0;
    local_44[2] = local_24 | (uint)*(ushort *)(local_68 + 4) << 10 | 0x100000;
    local_38 = local_6c;
    local_34 = DAT_08004be8 | (uint)*(ushort *)(local_68 + 4) << 10;
    local_30 = 0;
    local_14 = FUN_08004374(local_64,local_68 + 8,local_44,3);
    if (local_14 == 0xffffffe4) {
      local_14 = 0xffffffdc;
    }
    if (local_14 != 0) goto LAB_08004bbc;
    local_18 = DAT_08004be8;
  }
  else {
    if ((param_4 & 0x200) != 0) {
      local_14 = 0xffffffef;
      goto LAB_08004bbc;
    }
    iVar2 = FUN_08000b38(local_18);
    if (iVar2 != 1) {
      local_14 = 0xffffffeb;
      goto LAB_08004bbc;
    }
    if ((param_4 & 0x400) == 0) {
      local_18 = FUN_0800140c(local_64,local_68 + 8,DAT_08004bf0,
                              DAT_08004bec | (uint)*(ushort *)(local_68 + 4) << 10,local_68 + 0x28);
      if ((int)local_18 < 0) {
        local_14 = local_18;
        goto LAB_08004bbc;
      }
      FUN_08000e04(local_68 + 0x28);
    }
    else {
      local_18 = (uint)*(ushort *)(local_68 + 4) << 10 | DAT_08004be8;
      *(uint *)(local_68 + 0x30) = *(uint *)(local_68 + 0x30) | 0x10000;
    }
  }
  for (local_1c = 0; local_1c < *(uint *)(*(int *)(local_68 + 0x50) + 8); local_1c = local_1c + 1) {
    if ((((*(uint *)(local_68 + 0x30) & 1) != 0) &&
        (local_2c = FUN_0800140c(local_64,local_68 + 8,DAT_08004bf4,
                                 (*(byte *)(*(int *)(*(int *)(local_68 + 0x50) + 4) + local_1c * 0xc
                                           ) + 0x300) * 0x100000 |
                                 (uint)*(ushort *)(local_68 + 4) << 10 |
                                 *(uint *)(*(int *)(*(int *)(local_68 + 0x50) + 4) + local_1c * 0xc
                                          + 8),
                                 *(undefined4 *)
                                  (*(int *)(*(int *)(local_68 + 0x50) + 4) + local_1c * 0xc + 4)),
        (int)local_2c < 0)) && (local_2c != 0xfffffffe)) {
      local_14 = local_2c;
      goto LAB_08004bbc;
    }
    if ((*(uint *)(local_68 + 0x30) & 2) != 0) {
      if (*(uint *)(local_64 + 0x78) <
          *(uint *)(*(int *)(*(int *)(local_68 + 0x50) + 4) + local_1c * 0xc + 8)) {
        local_14 = 0xffffffe4;
        goto LAB_08004bbc;
      }
      *(uint *)(local_68 + 0x30) = *(uint *)(local_68 + 0x30) | 0x10000;
    }
  }
  if (**(int **)(local_68 + 0x50) == 0) {
    uVar3 = FUN_080002ee(*(undefined4 *)(*(int *)(local_64 + 0x68) + 0x28));
    *(undefined4 *)(local_68 + 0x4c) = uVar3;
    if (*(int *)(local_68 + 0x4c) == 0) {
      local_14 = 0xfffffff4;
      goto LAB_08004bbc;
    }
  }
  else {
    *(undefined4 *)(local_68 + 0x4c) = **(undefined4 **)(local_68 + 0x50);
  }
  FUN_0800033a(local_64,local_68 + 0x40);
  iVar2 = FUN_08000b38(local_18);
  if (iVar2 == DAT_08004bf8) {
    *(undefined4 *)(local_68 + 0x28) = 0xfffffffe;
    uVar3 = FUN_08000ba2(local_18);
    *(undefined4 *)(local_68 + 0x2c) = uVar3;
    *(uint *)(local_68 + 0x30) = *(uint *)(local_68 + 0x30) | 0x100000;
    *(undefined4 *)(local_68 + 0x40) = *(undefined4 *)(local_68 + 0x28);
    *(undefined4 *)(local_68 + 0x44) = 0;
    *(undefined4 *)(local_68 + 0x48) = *(undefined4 *)(*(int *)(local_64 + 0x68) + 0x28);
    if (*(int *)(local_68 + 0x2c) != 0) {
      iVar2 = local_68 + 8;
      uVar1 = *(ushort *)(local_68 + 4);
      uVar4 = FUN_080001c4(*(undefined4 *)(local_68 + 0x48),DAT_08004bfc);
      local_28 = FUN_0800140c(local_64,iVar2,DAT_08004bf0,uVar4 | (uint)uVar1 << 10 | 0x20000000,
                              *(undefined4 *)(local_68 + 0x4c));
      if ((int)local_28 < 0) {
        local_14 = local_28;
LAB_08004bbc:
        *(uint *)(local_68 + 0x30) = *(uint *)(local_68 + 0x30) | 0x80000;
        FUN_08004c34(local_64,local_68);
        return local_14;
      }
    }
  }
  return 0;
}




undefined4 FUN_08004c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08004834(param_1,param_2,param_3,param_4,DAT_08004c30);
  return uVar1;
}




undefined4 FUN_08004c34(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08005024(param_1,param_2);
  FUN_08000f44(param_1,param_2);
  if (**(int **)(param_2 + 0x50) == 0) {
    FUN_08000308(*(undefined4 *)(param_2 + 0x4c));
  }
  return uVar1;
}




int FUN_08004c78(int param_1,int param_2)

{
  int iVar1;
  undefined1 uStack_1d;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  do {
    local_18 = FUN_08001124(param_1,&local_1c);
    if (local_18 != 0) {
      return local_18;
    }
    iVar1 = FUN_08000938(param_1,local_1c);
    if (iVar1 == 0) {
      local_14 = 0;
      while( true ) {
        local_18 = 0;
        if (*(uint *)(param_2 + 0x3c) <= local_14) {
          FUN_08006e94(*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
          *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x18);
          FUN_0800033a(param_1,param_1 + 0x10);
          *(undefined4 *)(param_2 + 0x38) = local_1c;
          *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x20000;
          return 0;
        }
        if ((*(uint *)(param_2 + 0x30) & 0x100000) == 0) {
          local_18 = FUN_08000366(param_1,param_2 + 0x40,param_1,*(int *)(param_2 + 0x3c) - local_14
                                  ,*(undefined4 *)(param_2 + 0x38),local_14,&uStack_1d,1);
          if (local_18 != 0) {
            return local_18;
          }
        }
        else {
          local_18 = FUN_08001446(param_1,param_2 + 8,0,param_2 + 0x40,
                                  *(int *)(param_2 + 0x3c) - local_14,DAT_08004e1c,
                                  (uint)*(ushort *)(param_2 + 4) << 10 | DAT_08004e18,local_14,
                                  &uStack_1d,1);
          if (local_18 != 0) {
            return local_18;
          }
        }
        iVar1 = FUN_08000838(param_1,param_1 + 0x10,param_1,1,local_1c,local_14,&uStack_1d,1);
        if (iVar1 != 0) break;
        local_14 = local_14 + 1;
      }
      if (iVar1 != -0x54) {
        return iVar1;
      }
    }
    else if (iVar1 != -0x54) {
      return iVar1;
    }
    local_18 = 0xffffffac;
    FUN_08000320(param_1,param_1 + 0x10);
  } while( true );
}




int FUN_08004e20(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x34);
  FUN_08000ff6(param_1);
  iVar1 = FUN_08004c78(param_1,param_2);
  if (iVar1 == 0) {
    *(uint *)(param_2 + 0x30) = DAT_08004e6c & *(uint *)(param_2 + 0x30);
    iVar1 = 0;
  }
  return iVar1;
}




int FUN_08004e70(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_74 [40];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  undefined1 uStack_1d;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
    if ((*(uint *)(param_2 + 0x30) & 0x100000) == 0) {
      FUN_08000320(param_1,param_2 + 0x40);
    }
    *(uint *)(param_2 + 0x30) = DAT_0800501c & *(uint *)(param_2 + 0x30);
  }
  if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
    local_14 = *(undefined4 *)(param_2 + 0x34);
    if ((*(uint *)(param_2 + 0x30) & 0x100000) == 0) {
      FUN_08006dfc(auStack_74,0,0x54);
      local_4c = *(undefined4 *)(param_2 + 0x28);
      local_48 = *(undefined4 *)(param_2 + 0x2c);
      local_44 = 1;
      local_40 = *(undefined4 *)(param_2 + 0x34);
      local_34 = *param_1;
      iStack_30 = param_1[1];
      iStack_2c = param_1[2];
      local_28 = param_1[3];
      FUN_08000320(param_1,param_1);
      while (*(uint *)(param_2 + 0x34) < *(uint *)(param_2 + 0x2c)) {
        local_1c = FUN_08005190(param_1,auStack_74,&uStack_1d,1);
        if (local_1c < 0) {
          return local_1c;
        }
        local_1c = FUN_08005348(param_1,param_2,&uStack_1d,1);
        if (local_1c < 0) {
          return local_1c;
        }
        if (*param_1 != -1) {
          FUN_08000320(param_1,&local_34);
          FUN_08000320(param_1,param_1);
        }
      }
      while (local_18 = FUN_08000712(param_1,param_2 + 0x40,param_1,1), local_18 != 0) {
        if (local_18 != -0x54) {
          return local_18;
        }
        local_18 = FUN_08004c78(param_1,param_2);
        if (local_18 != 0) {
          return local_18;
        }
      }
    }
    else {
      uVar1 = FUN_080001a8(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x2c));
      *(undefined4 *)(param_2 + 0x34) = uVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x34);
    *(uint *)(param_2 + 0x30) = DAT_08005020 & *(uint *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x10000;
    *(undefined4 *)(param_2 + 0x34) = local_14;
  }
  return 0;
}




int FUN_08005024(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  ushort local_12;
  
  if ((*(uint *)(param_2 + 0x30) & 0x80000) == 0) {
    local_20 = FUN_08004e70(param_1,param_2);
    if (local_20 == 0) {
      if (((*(uint *)(param_2 + 0x30) & 0x10000) != 0) &&
         (cVar1 = FUN_08000986(param_2 + 8), cVar1 != '\x01')) {
        if (((*(uint *)(param_2 + 0x30) & 0x100000) == 0) &&
           (local_20 = FUN_080007e2(param_1,param_1 + 0x10,param_1,0), local_20 != 0)) {
          return local_20;
        }
        if ((*(uint *)(param_2 + 0x30) & 0x100000) == 0) {
          local_12 = (ushort)DAT_08005188;
          local_28 = *(undefined4 *)(param_2 + 0x28);
          uStack_24 = *(undefined4 *)(param_2 + 0x2c);
          FUN_08000e34(&local_28,uStack_24,&local_20);
          local_18 = &local_28;
          local_1c = 8;
        }
        else {
          local_12 = (ushort)DAT_08005184;
          local_18 = *(undefined4 **)(param_2 + 0x4c);
          local_1c = *(uint *)(param_2 + 0x2c);
        }
        local_38 = (uint)local_12 << 0x14 | (uint)*(ushort *)(param_2 + 4) << 10 | local_1c;
        local_34 = local_18;
        local_30 = *(uint *)(*(int *)(param_2 + 0x50) + 8) | (uint)*(ushort *)(param_2 + 4) << 10 |
                   0x10200000;
        local_2c = *(undefined4 *)(*(int *)(param_2 + 0x50) + 4);
        iVar2 = FUN_08004374(param_1,param_2 + 8,&local_38,2);
        if (iVar2 != 0) {
          *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x80000;
          return iVar2;
        }
        *(uint *)(param_2 + 0x30) = DAT_0800518c & *(uint *)(param_2 + 0x30);
      }
      local_20 = 0;
    }
    else {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x80000;
    }
  }
  else {
    local_20 = 0;
  }
  return local_20;
}




int FUN_08005190(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  if (*(uint *)(param_2 + 0x34) < *(uint *)(param_2 + 0x2c)) {
    iVar3 = FUN_080001c4(param_4,*(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x34));
    local_1c = param_3;
    for (local_20 = iVar3; local_20 != 0; local_20 = local_20 - iVar1) {
      if (((*(uint *)(param_2 + 0x30) & 0x40000) == 0) ||
         (*(int *)(param_2 + 0x3c) == *(int *)(*(int *)(param_1 + 0x68) + 0x1c))) {
        if ((*(uint *)(param_2 + 0x30) & 0x100000) == 0) {
          iVar1 = FUN_0800443a(param_1,0,param_2 + 0x40,*(undefined4 *)(param_2 + 0x28),
                               *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x34),
                               param_2 + 0x38,param_2 + 0x3c);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        else {
          *(undefined4 *)(param_2 + 0x38) = 0xfffffffe;
          *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x34);
        }
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x40000;
      }
      iVar1 = FUN_080001c4(local_20,*(int *)(*(int *)(param_1 + 0x68) + 0x1c) -
                                    *(int *)(param_2 + 0x3c));
      if ((*(uint *)(param_2 + 0x30) & 0x100000) == 0) {
        iVar2 = FUN_08000366(param_1,0,param_2 + 0x40,
                             *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c),
                             *(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             local_1c,iVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        iVar2 = FUN_08001446(param_1,param_2 + 8,0,param_2 + 0x40,
                             *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c),DAT_08005344,
                             DAT_08005340 | (uint)*(ushort *)(param_2 + 4) << 10,
                             *(undefined4 *)(param_2 + 0x3c),local_1c,iVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + iVar1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + iVar1;
      local_1c = local_1c + iVar1;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}




int FUN_08005348(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  local_20 = param_4;
  local_1c = param_3;
  if (((*(uint *)(param_2 + 0x30) & 0x100000) != 0) &&
     (uVar1 = FUN_080001a8(*(int *)(param_2 + 0x34) + param_4,*(undefined4 *)(param_2 + 0x2c)),
     *(uint *)(param_1 + 0x7c) < uVar1)) {
    iVar2 = FUN_08004e20(param_1,param_2);
    if (iVar2 != 0) {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x80000;
      return iVar2;
    }
    local_24 = 0;
  }
  do {
    if (local_20 == 0) {
      return param_4;
    }
    if (((*(uint *)(param_2 + 0x30) & 0x20000) == 0) ||
       (*(int *)(param_2 + 0x3c) == *(int *)(*(int *)(param_1 + 0x68) + 0x1c))) {
      if ((*(uint *)(param_2 + 0x30) & 0x100000) == 0) {
        if (((*(uint *)(param_2 + 0x30) & 0x20000) == 0) && (*(int *)(param_2 + 0x34) != 0)) {
          local_38 = 0;
          local_28 = FUN_0800443a(param_1,0,param_2 + 0x40,*(undefined4 *)(param_2 + 0x28),
                                  *(undefined4 *)(param_2 + 0x2c),*(int *)(param_2 + 0x34) + -1,
                                  param_2 + 0x38,&local_38);
          if (local_28 != 0) {
            *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x80000;
            return local_28;
          }
          FUN_0800033a(param_1,param_2 + 0x40);
        }
        FUN_08000ff6(param_1);
        local_2c = FUN_0800451e(param_1,param_2 + 0x40,param_1,*(undefined4 *)(param_2 + 0x38),
                                *(undefined4 *)(param_2 + 0x34),param_2 + 0x38,param_2 + 0x3c);
        if (local_2c != 0) {
          *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x80000;
          return local_2c;
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x38) = 0xfffffffe;
        *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x34);
      }
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x20000;
    }
    local_30 = FUN_080001c4(local_20,*(int *)(*(int *)(param_1 + 0x68) + 0x1c) -
                                     *(int *)(param_2 + 0x3c));
    while (local_34 = FUN_08000838(param_1,param_2 + 0x40,param_1,1,*(undefined4 *)(param_2 + 0x38),
                                   *(undefined4 *)(param_2 + 0x3c),local_1c,local_30), local_34 != 0
          ) {
      if (local_34 != -0x54) {
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x80000;
        return local_34;
      }
      local_34 = FUN_08004c78(param_1,param_2);
      if (local_34 != 0) {
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x80000;
        return local_34;
      }
    }
    *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + local_30;
    *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + local_30;
    local_1c = local_1c + local_30;
    local_20 = local_20 - local_30;
    FUN_08000ff6(param_1);
  } while( true );
}




int FUN_08005594(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 local_19 [5];
  int local_14;
  uint local_10;
  int local_c;
  
  if (((*(uint *)(param_2 + 0x30) & 0x40000) != 0) &&
     (local_c = FUN_08004e70(param_1,param_2), local_c != 0)) {
    return local_c;
  }
  if (((*(uint *)(param_2 + 0x30) & 0x800) != 0) &&
     (*(uint *)(param_2 + 0x34) < *(uint *)(param_2 + 0x2c))) {
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x2c);
  }
  if (*(uint *)(param_1 + 0x74) < (uint)(*(int *)(param_2 + 0x34) + param_4)) {
    local_14 = -0x1b;
  }
  else if (((*(uint *)(param_2 + 0x30) & 0x20000) == 0) &&
          (*(uint *)(param_2 + 0x2c) < *(uint *)(param_2 + 0x34))) {
    local_10 = *(uint *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x2c);
    do {
      if (local_10 <= *(uint *)(param_2 + 0x34)) goto LAB_08005652;
      local_19[0] = 0;
      local_14 = FUN_08005348(param_1,param_2,local_19,1);
    } while (-1 < local_14);
  }
  else {
LAB_08005652:
    local_14 = FUN_08005348(param_1,param_2,param_3,param_4);
    if (-1 < local_14) {
      *(uint *)(param_2 + 0x30) = DAT_08005684 & *(uint *)(param_2 + 0x30);
    }
  }
  return local_14;
}




undefined4 FUN_08005688(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_14;
  
  *(int *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x20);
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x34) == 0) {
    uVar3 = FUN_080002ee(*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    if (*(int *)(param_1 + 0xc) != 0) goto LAB_080056dc;
LAB_0800585a:
    local_14 = 0xfffffff4;
    FUN_08005874(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x34);
LAB_080056dc:
    if (*(int *)(*(int *)(param_1 + 0x68) + 0x38) == 0) {
      uVar3 = FUN_080002ee(*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      if (*(int *)(param_1 + 0x1c) == 0) goto LAB_0800585a;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x38);
    }
    FUN_0800033a(param_1,param_1);
    FUN_0800033a(param_1,param_1 + 0x10);
    if (*(int *)(*(int *)(param_1 + 0x68) + 0x3c) == 0) {
      uVar3 = FUN_080002ee(*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x2c));
      *(undefined4 *)(param_1 + 100) = uVar3;
      if (*(int *)(param_1 + 100) == 0) goto LAB_0800585a;
    }
    else {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x3c);
    }
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x40);
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0xff;
    }
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x44);
    if (*(int *)(param_1 + 0x74) == 0) {
      *(undefined4 *)(param_1 + 0x74) = DAT_0800586c;
    }
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x48);
    if (*(int *)(param_1 + 0x78) == 0) {
      *(undefined4 *)(param_1 + 0x78) = DAT_08005870;
    }
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x50);
    if (*(int *)(param_1 + 0x7c) == -1) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else if (*(int *)(param_1 + 0x7c) == 0) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28);
      if (*(int *)(*(int *)(param_1 + 0x68) + 0x4c) == 0) {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
      }
      else {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x68) + 0x4c);
      }
      uVar1 = FUN_080001c4(*(undefined4 *)(param_1 + 0x78),uVar2 >> 3);
      uVar3 = FUN_080001c4(uVar3,uVar1);
      *(undefined4 *)(param_1 + 0x7c) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_08006dfc(param_1 + 0x3c,0,0xc);
    FUN_08006dfc(param_1 + 0x30,0,0xc);
    FUN_08006dfc(param_1 + 0x48,0,0xc);
    local_14 = 0;
  }
  return local_14;
}




undefined4 FUN_08005874(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x34) == 0) {
    FUN_08000308(*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x38) == 0) {
    FUN_08000308(*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x3c) == 0) {
    FUN_08000308(*(undefined4 *)(param_1 + 100));
  }
  return 0;
}




int FUN_080058c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_84 [22];
  undefined1 local_6e;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0;
  local_14 = FUN_08005688(param_1,param_2);
  if (local_14 == 0) {
    FUN_08006dfc(*(undefined4 *)(param_1 + 100),0,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x2c));
    *(undefined4 *)(param_1 + 0x54) = 0;
    uVar1 = FUN_080001c4(*(int *)(*(int *)(param_1 + 0x68) + 0x2c) << 3,
                         *(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_08000ff6(param_1);
    local_14 = FUN_08002fc8(param_1,auStack_84);
    if (local_14 == 0) {
      local_2c = FUN_08000fa4(param_1);
      local_28 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c);
      local_24 = *(undefined4 *)(param_1 + 0x6c);
      local_20 = *(undefined4 *)(param_1 + 0x70);
      local_1c = *(undefined4 *)(param_1 + 0x74);
      local_18 = *(undefined4 *)(param_1 + 0x78);
      FUN_08000ed4(&local_2c);
      local_44 = DAT_08005a1c;
      local_40 = 0;
      local_3c = DAT_08005a20;
      local_38 = DAT_08005a24;
      local_34 = DAT_08005a28;
      local_30 = &local_2c;
      local_14 = FUN_08004374(param_1,auStack_84,&local_44,3);
      if (local_14 == 0) {
        local_6e = 0;
        local_14 = FUN_08004374(param_1,auStack_84,0,0);
        if (local_14 == 0) {
          local_64 = 0;
          local_60 = 1;
          local_14 = FUN_080027f0(param_1,auStack_84,&local_64);
        }
      }
    }
    FUN_08005874(param_1);
  }
  return local_14;
}




int FUN_08005a2c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined1 local_74 [4];
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  ushort local_28;
  ushort local_26;
  int local_24;
  undefined1 local_1d;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = FUN_08005688(param_1,param_2);
  if (local_14 == 0) {
    FUN_08006dfc(&local_48,0,0x20);
    local_2c = 1;
    local_50 = *DAT_08005d60;
    local_4c = DAT_08005d60[1];
    local_18 = 1;
    local_1c = 1;
    do {
      cVar1 = FUN_08000986(&local_30);
      if (cVar1 == '\x01') {
        FUN_08000c28(param_1 + 0x30);
        uVar3 = FUN_08000ac6(*(undefined4 *)(param_1 + 0x30));
        *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + ((uVar3 ^ 1) & 0xff);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
        FUN_08006b98(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x6c));
        *(undefined4 *)(param_1 + 0x54) = extraout_r1;
        FUN_0800100e(param_1);
        return 0;
      }
      iVar2 = FUN_08000a06(&local_30,&local_50);
      if (iVar2 != 0) {
        local_14 = -0x54;
        break;
      }
      if (local_18 == local_1c) {
        local_50 = local_30;
        local_4c = local_2c;
        local_18 = 0;
        local_1c = local_1c << 1;
      }
      local_18 = local_18 + 1;
      local_58 = DAT_08005d64;
      local_54 = 8;
      local_5c = param_1;
      local_24 = FUN_08002020(param_1,&local_48,&local_30,DAT_08005d68,DAT_08005d70,0,DAT_08005d6c,
                              &local_5c);
      if (local_24 < 0) {
        local_14 = local_24;
        break;
      }
      if ((local_24 != 0) && (cVar1 = FUN_08000ade(local_24), cVar1 != '\x01')) {
        *(undefined4 *)(param_1 + 0x20) = local_48;
        *(undefined4 *)(param_1 + 0x24) = local_44;
        local_24 = FUN_0800140c(param_1,&local_48,DAT_08005d68,DAT_08005d74,local_74);
        if (local_24 < 0) {
          local_14 = local_24;
          break;
        }
        FUN_08000e64(local_74);
        local_26 = local_74._2_2_;
        local_28 = local_74._0_2_;
        uVar3 = FUN_08000fbc(param_1);
        if ((local_26 != uVar3) || (uVar3 = FUN_08000fda(param_1), uVar3 < local_28)) {
          local_14 = -0x16;
          break;
        }
        local_1d = 0;
        uVar3 = FUN_08000fda(param_1);
        if (local_28 < uVar3) {
          local_1d = 1;
        }
        FUN_08006294(param_1,local_1d);
        if (local_68 != 0) {
          if (*(uint *)(param_1 + 0x70) < local_68) {
            local_14 = -0x16;
            break;
          }
          *(uint *)(param_1 + 0x70) = local_68;
        }
        if (local_64 != 0) {
          if (*(uint *)(param_1 + 0x74) < local_64) {
            local_14 = -0x16;
            break;
          }
          *(uint *)(param_1 + 0x74) = local_64;
        }
        if (local_60 != 0) {
          if (*(uint *)(param_1 + 0x78) < local_60) {
            local_14 = -0x16;
            break;
          }
          *(uint *)(param_1 + 0x78) = local_60;
          uVar4 = FUN_080001c4(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x78));
          *(undefined4 *)(param_1 + 0x7c) = uVar4;
        }
        if ((*(int *)(*(int *)(param_1 + 0x68) + 0x20) != 0) &&
           (local_6c != *(int *)(*(int *)(param_1 + 0x68) + 0x20))) {
          local_14 = -0x16;
          break;
        }
        *(int *)(param_1 + 0x6c) = local_6c;
        if (local_70 != *(int *)(*(int *)(param_1 + 0x68) + 0x1c)) {
          local_14 = -0x16;
          break;
        }
      }
      local_14 = FUN_08002828(param_1,&local_48,param_1 + 0x30);
    } while (local_14 == 0);
    FUN_08005d78(param_1);
  }
  return local_14;
}




undefined4 FUN_08005d78(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08005874(param_1);
  return uVar1;
}




int FUN_08005d94(int param_1,code *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_6c [4];
  undefined4 auStack_5c [5];
  ushort local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  ushort local_1e;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_08006dfc(auStack_5c,0,0x20);
  local_40 = 1;
  local_6c[2] = *DAT_08006040;
  uVar3 = DAT_08006040[1];
  puVar4 = DAT_08006040 + 2;
  local_14 = 1;
  local_18 = 1;
  local_6c[3] = uVar3;
  while (cVar1 = FUN_08000986(&local_44,uVar3,puVar4), cVar1 != '\x01') {
    iVar2 = FUN_08000a06(&local_44,local_6c + 2);
    if (iVar2 != 0) {
      return -0x54;
    }
    if (local_14 == local_18) {
      local_6c[2] = local_44;
      local_6c[3] = local_40;
      local_14 = 0;
      local_18 = local_18 << 1;
    }
    local_14 = local_14 + 1;
    for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
      local_3c = (*param_2)(param_3,auStack_5c[local_1c + 6]);
      if (local_3c != 0) {
        return local_3c;
      }
    }
    uVar5 = FUN_080027f0(param_1,auStack_5c,&local_44);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      return (int)uVar5;
    }
    local_34 = 0;
    for (local_1e = 0; puVar4 = (undefined4 *)(uint)local_1e, puVar4 < (undefined4 *)(uint)local_48;
        local_1e = local_1e + 1) {
      local_38 = FUN_0800140c(param_1,auStack_5c,DAT_08006048,DAT_08006044 | (uint)local_1e << 10,
                              local_6c);
      if (local_38 < 0) {
        if (local_38 != -2) {
          return local_38;
        }
      }
      else {
        FUN_08000e04(local_6c);
        iVar2 = FUN_08000b38(local_38);
        if (iVar2 == DAT_0800604c) {
          local_34 = FUN_0800472c(param_1,0,param_1,local_6c[0],local_6c[1],param_2,param_3);
          if (local_34 != 0) {
            return local_34;
          }
        }
        else if ((param_4 != '\0') && (iVar2 = FUN_08000b38(local_38), iVar2 == 0x200)) {
          for (local_24 = 0; local_24 < 2; local_24 = local_24 + 1) {
            local_34 = (*param_2)(param_3,local_6c[local_24]);
            if (local_34 != 0) {
              return local_34;
            }
          }
        }
      }
      uVar3 = 0x62;
    }
  }
  local_28 = *(undefined4 **)(param_1 + 0x28);
  do {
    if (local_28 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(char *)((int)local_28 + 6) == '\x01') {
      if ((((local_28[0xc] & 0x10000) != 0) && ((local_28[0xc] & 0x100000) == 0)) &&
         (local_2c = FUN_0800472c(param_1,local_28 + 0x10,param_1,local_28[10],local_28[0xb],param_2
                                  ,param_3), local_2c != 0)) {
        return local_2c;
      }
      if ((((local_28[0xc] & 0x20000) != 0) && ((local_28[0xc] & 0x100000) == 0)) &&
         (local_30 = FUN_0800472c(param_1,local_28 + 0x10,param_1,local_28[0xe],local_28[0xd],
                                  param_2,param_3), local_30 != 0)) {
        return local_30;
      }
    }
    local_28 = (undefined4 *)*local_28;
  } while( true );
}




int FUN_08006050(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 1;
  local_1c = *DAT_08006118;
  local_18 = DAT_08006118[1];
  local_c = 1;
  local_10 = 1;
  while( true ) {
    cVar1 = FUN_08000986(param_3 + 0x18);
    if (cVar1 == '\x01') {
      return -2;
    }
    iVar2 = FUN_08000a06(param_3 + 0x18,&local_1c);
    if (iVar2 != 0) break;
    if (local_c == local_10) {
      local_1c = *(undefined4 *)(param_3 + 0x18);
      local_18 = *(undefined4 *)(param_3 + 0x1c);
      local_c = 0;
      local_10 = local_10 << 1;
    }
    local_c = local_c + 1;
    iVar2 = FUN_080009b6(param_3 + 0x18,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    local_14 = FUN_080027f0(param_1,param_3,param_3 + 0x18);
    if (local_14 != 0) {
      return local_14;
    }
  }
  return -0x54;
}




uint FUN_0800611c(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_30 [8];
  uint local_28;
  undefined4 *local_24;
  int local_20;
  int *local_1c;
  
  local_20 = *param_1;
  local_24 = param_3;
  local_1c = param_1;
  local_28 = FUN_08000366(local_20,local_20 + 0x10,local_20,
                          *(undefined4 *)(*(int *)(local_20 + 0x68) + 0x1c),*param_3,param_3[1],
                          auStack_30,8);
  if (local_28 == 0) {
    FUN_08000a5e(auStack_30);
    iVar1 = FUN_080009b6(auStack_30,local_1c + 1);
    local_28 = (uint)(iVar1 != 0);
  }
  return local_28;
}




int FUN_0800619c(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 1;
  local_24 = *DAT_08006284;
  local_20 = DAT_08006284[1];
  local_14 = 1;
  local_18 = 1;
  while( true ) {
    cVar1 = FUN_08000986(param_3 + 0x18);
    if (cVar1 == '\x01') {
      return -2;
    }
    iVar2 = FUN_08000a06(param_3 + 0x18,&local_24);
    if (iVar2 != 0) break;
    if (local_14 == local_18) {
      local_24 = *(undefined4 *)(param_3 + 0x18);
      local_20 = *(undefined4 *)(param_3 + 0x1c);
      local_14 = 0;
      local_18 = local_18 << 1;
    }
    local_14 = local_14 + 1;
    local_2c = *param_2;
    local_28 = param_2[1];
    local_30 = param_1;
    local_1c = FUN_08002020(param_1,param_3,param_3 + 0x18,DAT_08006288,DAT_08006290,0,DAT_0800628c,
                            &local_30);
    if ((local_1c != 0) && (local_1c != -2)) {
      return local_1c;
    }
  }
  return -0x54;
}




void FUN_08006294(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x30) = DAT_080062c0 & *(uint *)(param_1 + 0x30) | (uint)param_2 << 9;
  return;
}




undefined4 FUN_080062c4(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + (int)param_2;
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar1 = FUN_08000c5e(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar2 & 0x7fffffff | iVar1 << 0x1f;
  return 0;
}




void FUN_0800630c(int param_1,ushort param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 == DAT_08006384) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)param_2 << 10 | DAT_08006388;
  }
  *(uint *)(param_1 + 0x30) = DAT_08006380 & *(uint *)(param_1 + 0x30) | uVar2;
  if (param_2 == DAT_08006384) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  if (param_2 == DAT_08006384) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3[1];
  }
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}




int FUN_0800638c(int param_1)

{
  char cVar1;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [32];
  int local_14;
  
  cVar1 = FUN_08000cc0(param_1 + 0x30);
  if (cVar1 == '\x01') {
    local_14 = FUN_080027f0(param_1,auStack_34,param_1 + 0x20);
    if (local_14 == 0) {
      local_4c = FUN_08000fa4(param_1);
      local_48 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x1c);
      local_44 = *(undefined4 *)(param_1 + 0x6c);
      local_40 = *(undefined4 *)(param_1 + 0x70);
      local_3c = *(undefined4 *)(param_1 + 0x74);
      local_38 = *(undefined4 *)(param_1 + 0x78);
      FUN_08000ed4(&local_4c);
      local_54 = DAT_08006454;
      local_50 = &local_4c;
      local_14 = FUN_08004374(param_1,auStack_34,&local_54,1);
      if (local_14 == 0) {
        FUN_08006294(param_1,0);
        local_14 = 0;
      }
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}




int FUN_08006458(int param_1)

{
  char cVar1;
  uint local_40 [2];
  undefined1 auStack_38 [34];
  ushort local_16;
  int local_14;
  
  cVar1 = FUN_08000c9e(param_1 + 0x3c);
  if (cVar1 == '\x01') {
    local_14 = FUN_080027f0(param_1,auStack_38,param_1 + 0x40);
    if (local_14 == 0) {
      local_16 = FUN_08000b86(*(undefined4 *)(param_1 + 0x3c));
      FUN_0800630c(param_1,DAT_080064f8,0);
      local_40[0] = DAT_080064fc | (uint)local_16 << 10;
      local_40[1] = 0;
      local_14 = FUN_08004374(param_1,auStack_38,local_40,1);
      if (local_14 == 0) {
        local_14 = 0;
      }
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}




int FUN_08006500(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c0 [23];
  char local_a9;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  undefined1 auStack_a0 [23];
  byte local_89;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [40];
  uint local_58;
  undefined1 *local_54;
  uint local_40 [3];
  undefined1 *local_34;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort local_18;
  char local_15;
  int local_14;
  
  cVar1 = FUN_08000c5e(param_1 + 0x30);
  if (cVar1 == '\x01') {
    local_14 = 0;
    while (local_14 < 2) {
      FUN_08006dfc(auStack_c0,0,0x20);
      local_a9 = '\x01';
      local_a4 = 1;
      local_15 = '\0';
      while (cVar1 = FUN_08000986(auStack_a8), cVar1 != '\x01') {
        local_1c = FUN_080027f0(param_1,auStack_a0,auStack_a8);
        if (local_1c != 0) {
          return local_1c;
        }
        if (local_a9 == '\x01') {
LAB_080067b0:
          FUN_08006e94(auStack_c0,auStack_a0,0x20);
        }
        else {
          local_20 = FUN_0800619c(param_1,auStack_a8,auStack_80);
          if ((local_20 < 0) && (local_20 != -2)) {
            return local_20;
          }
          if ((local_14 == 0) && (local_20 != -2)) {
            local_24 = FUN_0800140c(param_1,auStack_80,DAT_08006834,local_20,auStack_30);
            if (local_24 < 0) {
              return local_24;
            }
            FUN_08000a5e(auStack_30);
            cVar1 = FUN_08000a06(auStack_30,auStack_a8);
            if (cVar1 == '\x01') goto LAB_080066f2;
            local_18 = (ushort)DAT_08006838;
            iVar2 = FUN_08000ce4(param_1 + 0x30,auStack_c0);
            if (iVar2 != 0) {
              local_18 = FUN_08000b86(*(undefined4 *)(param_1 + 0x30));
              FUN_0800630c(param_1,DAT_08006838,0);
            }
            FUN_08000a92(auStack_30);
            if (local_18 == DAT_08006838) {
              local_40[0] = 0;
            }
            else {
              local_40[0] = DAT_0800683c | (uint)local_18 << 10;
            }
            local_40[1] = 0;
            local_40[2] = DAT_08006840;
            local_34 = auStack_30;
            local_24 = FUN_08003d80(param_1,auStack_c0,local_40,2);
            FUN_08000a5e(auStack_30);
            if (local_24 < 0) {
              return local_24;
            }
            if (local_24 == 3) {
              local_15 = '\x01';
            }
          }
          else {
LAB_080066f2:
            if (((local_14 != 1) || (local_20 != -2)) || (param_2 == '\0')) goto LAB_080067b0;
            local_1c = FUN_08002828(param_1,auStack_a0,param_1 + 0x48);
            if (local_1c != 0) {
              return local_1c;
            }
            FUN_08000a92(auStack_88);
            local_58 = DAT_08006844 | (local_89 + 0x600) * 0x100000;
            local_54 = auStack_88;
            local_28 = FUN_08003d80(param_1,auStack_c0,&local_58,1);
            FUN_08000a5e(auStack_88);
            if (local_28 < 0) {
              return local_28;
            }
            if (local_28 == 3) {
              local_15 = '\x01';
            }
          }
        }
      }
      if (local_15 == '\0') {
        local_14 = local_14 + 1;
      }
      else {
        local_14 = 0;
      }
    }
    cVar1 = FUN_08000c80(param_1 + 0x30);
    iVar2 = FUN_080062c4(param_1,(int)-cVar1);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}




int FUN_08006848(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800638c(param_1);
  if (((iVar1 == 0) && (iVar1 = FUN_08006458(param_1), iVar1 == 0)) &&
     (iVar1 = FUN_08006500(param_1,1), iVar1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}




undefined4 FUN_0800689e(int *param_1)

{
  *param_1 = *param_1 + 1;
  return 0;
}




int FUN_080068c0(undefined4 param_1)

{
  int iVar1;
  int local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_08005d94(param_1,DAT_080068f4,local_10,0);
  if (iVar1 != 0) {
    local_10[0] = iVar1;
  }
  return local_10[0];
}




/* WARNING: Removing unreachable block (ram,0x0800690c) */

undefined4 FUN_080068f8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_080058c4(param_1,param_2);
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x0800693e) */

undefined4 FUN_0800692a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08005a2c(param_1,param_2);
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x0800696e) */

undefined4 FUN_0800695c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08005d78(param_1);
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x080069a0) */

undefined4 FUN_08006988(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08004c00(param_1,param_2,param_3,param_4);
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x080069d2) */

undefined4 FUN_080069be(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08004c34(param_1,param_2);
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x08006a08) */

undefined4 FUN_080069f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08005594(param_1,param_2,param_3,param_4);
  return uVar1;
}




void FUN_08006a28(void)

{
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_c = DAT_08006a70;
  local_10 = DAT_08006a74;
  while (local_10 < DAT_08006a78) {
    *local_10 = *local_c;
    local_10 = local_10 + 1;
    local_c = local_c + 1;
  }
  local_10 = DAT_08006a7c;
  while( true ) {
    if (DAT_08006a80 <= local_10) break;
    *local_10 = 0;
    local_10 = local_10 + 1;
  }
  FUN_080000b8();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}




undefined8 FUN_08006a8c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  iVar5 = 0;
  if (param_2 <= param_1 >> 1) {
    if (param_2 <= param_1 >> 4) {
      if (param_2 <= param_1 >> 8) {
        if (param_1 >> 0xc < param_2) goto LAB_08006af8;
        if (param_2 <= param_1 >> 0x10) {
          iVar5 = -0x1000000;
          uVar1 = param_2 << 8;
          if (param_2 << 8 <= param_1 >> 0x10) {
            iVar5 = -0x10000;
            uVar1 = param_2 << 0x10;
            if (param_2 << 0x10 == 0) {
              uVar4 = FUN_08006ba0(0);
              return CONCAT44(param_1,uVar4);
            }
          }
          param_2 = uVar1;
          if (param_1 >> 0xc < param_2) goto LAB_08006af8;
        }
        while( true ) {
          bVar6 = param_2 <= param_1 >> 0xf;
          uVar1 = param_1;
          if (bVar6) {
            uVar1 = param_1 + param_2 * -0x8000;
          }
          bVar10 = param_2 * 0x8000 <= param_1;
          bVar7 = param_2 <= uVar1 >> 0xe;
          uVar2 = uVar1;
          if (bVar7) {
            uVar2 = uVar1 + param_2 * -0x4000;
          }
          bVar8 = param_2 <= uVar2 >> 0xd;
          uVar3 = uVar2;
          if (bVar8) {
            uVar3 = uVar2 + param_2 * -0x2000;
          }
          bVar9 = param_2 <= uVar3 >> 0xc;
          param_1 = uVar3;
          if (bVar9) {
            param_1 = uVar3 + param_2 * -0x1000;
          }
          iVar5 = (((iVar5 * 2 + (uint)(bVar6 && bVar10)) * 2 +
                   (uint)(bVar7 && param_2 * 0x4000 <= uVar1)) * 2 +
                  (uint)(bVar8 && param_2 * 0x2000 <= uVar2)) * 2 +
                  (uint)(bVar9 && param_2 * 0x1000 <= uVar3);
LAB_08006af8:
          bVar6 = param_2 <= param_1 >> 0xb;
          uVar1 = param_1;
          if (bVar6) {
            uVar1 = param_1 + param_2 * -0x800;
          }
          bVar10 = param_2 <= uVar1 >> 10;
          uVar2 = uVar1;
          if (bVar10) {
            uVar2 = uVar1 + param_2 * -0x400;
          }
          bVar7 = param_2 <= uVar2 >> 9;
          uVar3 = uVar2;
          if (bVar7) {
            uVar3 = uVar2 + param_2 * -0x200;
          }
          uVar1 = ((iVar5 * 2 + (uint)(bVar6 && param_2 * 0x800 <= param_1)) * 2 +
                  (uint)(bVar10 && param_2 * 0x400 <= uVar1)) * 2 +
                  (uint)(bVar7 && param_2 * 0x200 <= uVar2);
          bVar6 = param_2 <= uVar3 >> 8;
          param_1 = uVar3;
          if (bVar6) {
            param_1 = uVar3 + param_2 * -0x100;
          }
          bVar6 = bVar6 && param_2 * 0x100 <= uVar3;
          iVar5 = uVar1 * 2 + (uint)bVar6;
          if (!CARRY4(uVar1,uVar1) && !CARRY4(uVar1 * 2,(uint)bVar6)) break;
          param_2 = param_2 >> 8;
        }
      }
      bVar6 = param_2 <= param_1 >> 7;
      uVar1 = param_1;
      if (bVar6) {
        uVar1 = param_1 + param_2 * -0x80;
      }
      bVar10 = param_2 * 0x80 <= param_1;
      bVar7 = param_2 <= uVar1 >> 6;
      uVar2 = uVar1;
      if (bVar7) {
        uVar2 = uVar1 + param_2 * -0x40;
      }
      bVar8 = param_2 <= uVar2 >> 5;
      uVar3 = uVar2;
      if (bVar8) {
        uVar3 = uVar2 + param_2 * -0x20;
      }
      bVar9 = param_2 <= uVar3 >> 4;
      param_1 = uVar3;
      if (bVar9) {
        param_1 = uVar3 + param_2 * -0x10;
      }
      iVar5 = (((iVar5 * 2 + (uint)(bVar6 && bVar10)) * 2 + (uint)(bVar7 && param_2 * 0x40 <= uVar1)
               ) * 2 + (uint)(bVar8 && param_2 * 0x20 <= uVar2)) * 2 +
              (uint)(bVar9 && param_2 * 0x10 <= uVar3);
    }
    bVar6 = param_2 <= param_1 >> 3;
    uVar1 = param_1;
    if (bVar6) {
      uVar1 = param_1 + param_2 * -8;
    }
    bVar10 = param_2 * 8 <= param_1;
    bVar7 = param_2 <= uVar1 >> 2;
    uVar2 = uVar1;
    if (bVar7) {
      uVar2 = uVar1 + param_2 * -4;
    }
    bVar8 = param_2 <= uVar2 >> 1;
    param_1 = uVar2;
    if (bVar8) {
      param_1 = uVar2 + param_2 * -2;
    }
    iVar5 = ((iVar5 * 2 + (uint)(bVar6 && bVar10)) * 2 + (uint)(bVar7 && param_2 * 4 <= uVar1)) * 2
            + (uint)(bVar8 && param_2 * 2 <= uVar2);
  }
  uVar1 = param_1 - param_2;
  if (param_2 > param_1) {
    uVar1 = param_1;
  }
  return CONCAT44(uVar1,iVar5 * 2 + (uint)(param_2 <= param_1));
}




void FUN_08006b98(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_08006ba0(0);
    return;
  }
  FUN_08006a8c();
  return;
}




void FUN_08006ba0(void)

{
  return;
}




int FUN_08006ba4(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1c;
  if (0xffff < param_1) {
    param_1 = param_1 >> 0x10;
    iVar1 = 0xc;
  }
  if (0xff < param_1) {
    param_1 = param_1 >> 8;
    iVar1 = iVar1 + -8;
  }
  if (0xf < param_1) {
    param_1 = param_1 >> 4;
    iVar1 = iVar1 + -4;
  }
  return (uint)(byte)(&DAT_08006bd0)[param_1] + iVar1;
}




int FUN_08006be0(uint param_1)

{
  int iVar1;
  
  param_1 = param_1 & -param_1;
  iVar1 = 0x1c;
  if (0xffff < param_1) {
    param_1 = param_1 >> 0x10;
    iVar1 = 0xc;
  }
  if (0xff < param_1) {
    param_1 = param_1 >> 8;
    iVar1 = iVar1 + -8;
  }
  if (0xf < param_1) {
    param_1 = param_1 >> 4;
    iVar1 = iVar1 + -4;
  }
  return (uint)(byte)(&DAT_08006c10)[param_1] - iVar1;
}




uint FUN_08006c20(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & DAT_08006c48);
  uVar1 = (param_1 & DAT_08006c4c) + (param_1 >> 2 & DAT_08006c4c);
  return ((uVar1 >> 4) + uVar1 & DAT_08006c50) * 0x1010101 >> 0x18;
}




void FUN_08006c54(undefined4 param_1)

{
  FUN_08006cc0(*DAT_08006c64,param_1);
  return;
}




void FUN_08006c68(undefined4 param_1)

{
  FUN_08006eb4(*DAT_08006c78,param_1);
  return;
}




uint FUN_08006c7c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = DAT_08006cbc;
  if (*DAT_08006cbc == 0) {
    iVar2 = FUN_08006e6c();
    *piVar1 = iVar2;
  }
  uVar3 = FUN_08006e6c(param_1,param_2);
  if ((uVar3 == 0xffffffff) ||
     ((uVar4 = uVar3 + 3 & 0xfffffffc, uVar3 != uVar4 &&
      (iVar2 = FUN_08006e6c(param_1,uVar4 - uVar3), iVar2 == -1)))) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}




undefined8 FUN_08006cc0(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *local_20;
  
  uVar5 = (param_2 + 3 & 0xfffffffc) + 8;
  local_20 = param_1;
  if (uVar5 < 0xc) {
    uVar5 = 0xc;
LAB_08006cd4:
    if (uVar5 < param_2) goto LAB_08006d40;
    FUN_08006dc0(param_1);
    puVar3 = DAT_08006dbc;
    puVar6 = (uint *)*DAT_08006dbc;
    for (puVar1 = (uint *)*DAT_08006dbc; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
      uVar7 = *puVar1 - uVar5;
      if (-1 < (int)uVar7) {
        if (uVar7 < 0xc) {
          if (puVar6 == puVar1) {
            *DAT_08006dbc = puVar1[1];
          }
          else {
            puVar6[1] = puVar1[1];
          }
          goto LAB_08006d70;
        }
        puVar4 = (uint *)((int)puVar1 + uVar5);
        *puVar1 = uVar5;
        if (puVar6 == puVar1) {
          *puVar3 = (uint)puVar4;
        }
        else {
          puVar6[1] = (uint)puVar4;
        }
        uVar5 = puVar1[1];
        *puVar4 = uVar7;
        goto LAB_08006d60;
      }
      puVar6 = puVar1;
    }
    puVar1 = (uint *)FUN_08006c7c(param_1,uVar5);
    if (puVar1 != (uint *)0xffffffff) {
      *puVar1 = uVar5;
LAB_08006d70:
      FUN_08006dd0(param_1);
      puVar6 = puVar1 + 1;
      puVar3 = (uint *)((int)puVar1 + 0xbU & 0xfffffff8);
      if (puVar3 != puVar6) {
        *(int *)((int)puVar1 + ((int)puVar3 - (int)puVar6)) = (int)puVar6 - (int)puVar3;
      }
      goto LAB_08006d46;
    }
    puVar1 = (uint *)*puVar3;
    for (local_20 = (uint *)*puVar3; local_20 != (uint *)0x0; local_20 = (uint *)local_20[1]) {
      puVar1 = local_20;
    }
    if (puVar1 != (uint *)0x0) {
      uVar7 = *puVar1;
      iVar2 = FUN_08006e6c(param_1,0);
      if ((int)puVar1 + uVar7 == iVar2) {
        uVar7 = *puVar1;
        iVar2 = FUN_08006c7c(param_1,uVar5 - uVar7);
        if (iVar2 != -1) {
          *puVar1 = *puVar1 + (uVar5 - uVar7);
          puVar6 = (uint *)*puVar3;
          if (((uint *)*puVar3)[1] == 0) {
            *puVar3 = 0;
          }
          else {
            do {
              puVar4 = puVar6;
              puVar6 = (uint *)puVar4[1];
            } while ((uint *)puVar4[1] != puVar1);
            uVar5 = 0;
LAB_08006d60:
            puVar4[1] = uVar5;
          }
          goto LAB_08006d70;
        }
      }
    }
    *param_1 = 0xc;
    FUN_08006dd0(param_1);
  }
  else {
    if (-1 < (int)uVar5) goto LAB_08006cd4;
LAB_08006d40:
    *param_1 = 0xc;
  }
  puVar3 = (uint *)0x0;
LAB_08006d46:
  return CONCAT44(local_20,puVar3);
}




void FUN_08006dc0(void)

{
  FUN_08006e90(DAT_08006dcc);
  return;
}




void FUN_08006dd0(void)

{
  FUN_08006e92(DAT_08006ddc);
  return;
}




int FUN_08006de0(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  do {
    if (param_3 == iVar2) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
    uVar3 = (uint)*(byte *)(param_2 + -1 + iVar2);
  } while (*pbVar1 == uVar3);
  return *pbVar1 - uVar3;
}




void FUN_08006dfc(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}




char * FUN_08006e0c(char *param_1,char param_2)

{
  while( true ) {
    if (*param_1 == '\0') {
      return (char *)((uint)param_1 & -(uint)(param_2 == '\0'));
    }
    if (*param_1 == param_2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}




int FUN_08006e28(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  for (pcVar2 = param_1; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
    for (pcVar1 = param_2; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == *pcVar2) goto LAB_08006e32;
    }
  }
LAB_08006e32:
  return (int)pcVar2 - (int)param_1;
}




int FUN_08006e4a(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  for (pcVar2 = param_1; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
    pcVar1 = param_2;
    while( true ) {
      if (*pcVar1 == '\0') goto LAB_08006e68;
      if (*pcVar1 == *pcVar2) break;
      pcVar1 = pcVar1 + 1;
    }
  }
LAB_08006e68:
  return (int)pcVar2 - (int)param_1;
}




void FUN_08006e6c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_08006e8c;
  *DAT_08006e8c = 0;
  iVar2 = FUN_08006f48(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}




void FUN_08006e90(void)

{
  return;
}




void FUN_08006e92(void)

{
  return;
}




void FUN_08006e94(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
  }
  return;
}




int FUN_08006ea6(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}




void FUN_08006eb4(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  if (param_2 == 0) {
    return;
  }
  piVar7 = (int *)(param_2 + -4);
  if (*piVar7 < 0) {
    piVar7 = (int *)((int)piVar7 + *piVar7);
  }
  FUN_08006dc0(param_1);
  puVar1 = DAT_08006f44;
  piVar4 = (int *)*DAT_08006f44;
  if (piVar4 != (int *)0x0) {
    if (piVar4 <= piVar7) {
      do {
        piVar5 = piVar4;
        piVar4 = (int *)piVar5[1];
        if (piVar4 == (int *)0x0) break;
      } while (piVar4 <= piVar7);
      piVar2 = (int *)((int)piVar5 + *piVar5);
      if (piVar2 == piVar7) {
        iVar3 = *piVar5 + *piVar7;
        *piVar5 = iVar3;
        if (piVar4 == (int *)((int)piVar5 + iVar3)) {
          iVar6 = piVar4[1];
          *piVar5 = *piVar4 + iVar3;
          piVar5[1] = iVar6;
        }
      }
      else if (piVar7 < piVar2) {
        *param_1 = 0xc;
      }
      else {
        if (piVar4 == (int *)((int)piVar7 + *piVar7)) {
          iVar3 = *piVar4;
          piVar4 = (int *)piVar4[1];
          *piVar7 = iVar3 + *piVar7;
        }
        piVar7[1] = (int)piVar4;
        piVar5[1] = (int)piVar7;
      }
      goto LAB_08006ed8;
    }
    if (piVar4 == (int *)((int)piVar7 + *piVar7)) {
      iVar3 = *piVar4;
      piVar4 = (int *)piVar4[1];
      *piVar7 = iVar3 + *piVar7;
    }
  }
  piVar7[1] = (int)piVar4;
  *puVar1 = piVar7;
LAB_08006ed8:
  FUN_08006dd0(param_1);
  return;
}




int FUN_08006f48(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_08006f5c;
  if (*DAT_08006f5c == 0) {
    iVar1 = DAT_08006f60;
  }
  *DAT_08006f5c = iVar1 + param_1;
  return iVar1;
}



